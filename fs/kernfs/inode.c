/*
 * fs/kernfs/inode.c - kernfs inode implementation
 *
 * Copyright (c) 2001-3 Patrick Mochel
 * Copyright (c) 2007 SUSE Linux Products GmbH
 * Copyright (c) 2007, 2013 Tejun Heo <tj@kernel.org>
 *
 * This file is released under the GPLv2.
 */

#include <linux/pagemap.h>
#include <linux/backing-dev.h>
#include <linux/capability.h>
#include <linux/errno.h>
#include <linux/slab.h>
#include <linux/xattr.h>
#include <linux/security.h>

#include "kernfs-internal.h"

static const struct address_space_operations kernfs_aops = {
	.readpage	= simple_readpage,
	.write_begin	= simple_write_begin,
	.write_end	= simple_write_end,
};

static const struct inode_operations kernfs_iops = {
	.permission	= kernfs_iop_permission,
	.setattr	= kernfs_iop_setattr,
	.getattr	= kernfs_iop_getattr,
	.listxattr	= kernfs_iop_listxattr,
};

static struct kernfs_iattrs *kernfs_iattrs(struct kernfs_node *kn)
{
	static DEFINE_MUTEX(iattr_mutex);
	struct kernfs_iattrs *ret;
	struct iattr *iattrs;

	mutex_lock(&iattr_mutex);

	if (kn->iattr)
		goto out_unlock;

	kn->iattr = kzalloc(sizeof(struct kernfs_iattrs), GFP_KERNEL);
	if (!kn->iattr)
		goto out_unlock;
	iattrs = &kn->iattr->ia_iattr;

	/* assign default attributes */
	iattrs->ia_mode = kn->mode;
	iattrs->ia_uid = GLOBAL_ROOT_UID;
	iattrs->ia_gid = GLOBAL_ROOT_GID;

	ktime_get_real_ts(&iattrs->ia_atime);
	iattrs->ia_mtime = iattrs->ia_atime;
	iattrs->ia_ctime = iattrs->ia_atime;

	simple_xattrs_init(&kn->iattr->xattrs);
out_unlock:
	ret = kn->iattr;
	mutex_unlock(&iattr_mutex);
	return ret;
}

static int __kernfs_setattr(struct kernfs_node *kn, const struct iattr *iattr)
{
	struct kernfs_iattrs *attrs;
	struct iattr *iattrs;
	unsigned int ia_valid = iattr->ia_valid;

	attrs = kernfs_iattrs(kn);
	if (!attrs)
		return -ENOMEM;

	iattrs = &attrs->ia_iattr;

	if (ia_valid & ATTR_UID)
		iattrs->ia_uid = iattr->ia_uid;
	if (ia_valid & ATTR_GID)
		iattrs->ia_gid = iattr->ia_gid;
	if (ia_valid & ATTR_ATIME)
		iattrs->ia_atime = iattr->ia_atime;
	if (ia_valid & ATTR_MTIME)
		iattrs->ia_mtime = iattr->ia_mtime;
	if (ia_valid & ATTR_CTIME)
		iattrs->ia_ctime = iattr->ia_ctime;
	if (ia_valid & ATTR_MODE) {
		umode_t mode = iattr->ia_mode;
		iattrs->ia_mode = kn->mode = mode;
	}
	return 0;
}

/**
 * kernfs_setattr - set iattr on a node
 * @kn: target node
 * @iattr: iattr to set
 *
 * Returns 0 on success, -errno on failure.
 */
int kernfs_setattr(struct kernfs_node *kn, const struct iattr *iattr)
{
	int ret;

	mutex_lock(&kernfs_mutex);
	ret = __kernfs_setattr(kn, iattr);
	mutex_unlock(&kernfs_mutex);
	return ret;
}

int kernfs_iop_setattr(struct dentry *dentry, struct iattr *iattr)
{
	struct inode *inode = d_inode(dentry);
	struct kernfs_node *kn = inode->i_private;
	int error;

	if (!kn)
		return -EINVAL;

	mutex_lock(&kernfs_mutex);
	error = setattr_prepare(dentry, iattr);
	if (error)
		goto out;

	error = __kernfs_setattr(kn, iattr);
	if (error)
		goto out;

	/* this ignores size changes */
	setattr_copy(inode, iattr);

out:
	mutex_unlock(&kernfs_mutex);
	return error;
}

static int kernfs_node_setsecdata(struct kernfs_iattrs *attrs, void **secdata,
				  u32 *secdata_len)
{
	void *old_secdata;
	size_t old_secdata_len;

	old_secdata = attrs->ia_secdata;
	old_secdata_len = attrs->ia_secdata_len;

	attrs->ia_secdata = *secdata;
	attrs->ia_secdata_len = *secdata_len;

	*secdata = old_secdata;
	*secdata_len = old_secdata_len;
	return 0;
}

ssize_t kernfs_iop_listxattr(struct dentry *dentry, char *buf, size_t size)
{
	struct kernfs_node *kn = kernfs_dentry_node(dentry);
	struct kernfs_iattrs *attrs;

	attrs = kernfs_iattrs(kn);
	if (!attrs)
		return -ENOMEM;

	return simple_xattr_list(d_inode(dentry), &attrs->xattrs, buf, size);
}

static inline void set_default_inode_attr(struct inode *inode, umode_t mode)
{
	inode->i_mode = mode;
	inode->i_atime = inode->i_mtime =
		inode->i_ctime = current_time(inode);
}

static inline void set_inode_attr(struct inode *inode, struct iattr *iattr)
{
	struct super_block *sb = inode->i_sb;
	inode->i_uid = iattr->ia_uid;
	inode->i_gid = iattr->ia_gid;
	inode->i_atime = timespec_trunc(iattr->ia_atime, sb->s_time_gran);
	inode->i_mtime = timespec_trunc(iattr->ia_mtime, sb->s_time_gran);
	inode->i_ctime = timespec_trunc(iattr->ia_ctime, sb->s_time_gran);
}

static void kernfs_refresh_inode(struct kernfs_node *kn, struct inode *inode)
{
	struct kernfs_iattrs *attrs = kn->iattr;

	inode->i_mode = kn->mode;
	if (attrs) {
		/*
		 * kernfs_node has non-default attributes get them from
		 * persistent copy in kernfs_node.
		 */
		set_inode_attr(inode, &attrs->ia_iattr);
		security_inode_notifysecctx(inode, attrs->ia_secdata,
					    attrs->ia_secdata_len);
	}

	if (kernfs_type(kn) == KERNFS_DIR)
		set_nlink(inode, kn->dir.subdirs + 2);
}

int kernfs_iop_getattr(const struct path *path, struct kstat *stat,
		       u32 request_mask, unsigned int query_flags)
{
	struct inode *inode = d_inode(path->dentry);
	struct kernfs_node *kn = inode->i_private;

	mutex_lock(&kernfs_mutex);
	kernfs_refresh_inode(kn, inode);
	mutex_unlock(&kernfs_mutex);

	generic_fillattr(inode, stat);
	return 0;
}

static void kernfs_init_inode(struct kernfs_node *kn, struct inode *inode)
{
	kernfs_get(kn);
	inode->i_private = kn;
	inode->i_mapping->a_ops = &kernfs_aops;
	inode->i_op = &kernfs_iops;
	inode->i_generation = kn->id.generation;

	set_default_inode_attr(inode, kn->mode);
	kernfs_refresh_inode(kn, inode);

	/* initialize inode according to type */
	switch (kernfs_type(kn)) {
	case KERNFS_DIR:
		inode->i_op = &kernfs_dir_iops;
		inode->i_fop = &kernfs_dir_fops;
		if (kn->flags & KERNFS_EMPTY_DIR)
			make_empty_dir_inode(inode);
		break;
	case KERNFS_FILE:
		inode->i_size = kn->attr.size;
		inode->i_fop = &kernfs_file_fops;
		break;
	case KERNFS_LINK:
		inode->i_op = &kernfs_symlink_iops;
		break;
	default:
		BUG();
	}

	unlock_new_inode(inode);
}

/**
 *	kernfs_get_inode - get inode for kernfs_node
 *	@sb: super block
 *	@kn: kernfs_node to allocate inode for
 *
 *	Get inode for @kn.  If such inode doesn't exist, a new inode is
 *	allocated and basics are initialized.  New inode is returned
 *	locked.
 *
 *	LOCKING:
 *	Kernel thread context (may sleep).
 *
 *	RETURNS:
 *	Pointer to allocated inode on success, NULL on failure.
 */
struct inode *kernfs_get_inode(struct super_block *sb, struct kernfs_node *kn)
{
	struct inode *inode;

	inode = iget_locked(sb, kn->id.ino);
	if (inode && (inode->i_state & I_NEW))
		kernfs_init_inode(kn, inode);

	return inode;
}

/*
 * The kernfs_node serves as both an inode and a directory entry for
 * kernfs.  To prevent the kernfs inode numbers from being freed
 * prematurely we take a reference to kernfs_node from the kernfs inode.  A
 * super_operations.evict_inode() implementation is needed to drop that
 * reference upon inode destruction.
 */
void kernfs_evict_inode(struct inode *inode)
{
	struct kernfs_node *kn = inode->i_private;

	truncate_inode_pages_final(&inode->i_data);
	clear_inode(inode);
	kernfs_put(kn);
}

int kernfs_iop_permission(struct inode *inode, int mask)
{
	struct kernfs_node *kn;

	if (mask & MAY_NOT_BLOCK)
		return -ECHILD;

	kn = inode->i_private;

	mutex_lock(&kernfs_mutex);
	kernfs_refresh_inode(kn, inode);
	mutex_unlock(&kernfs_mutex);

	return generic_permission(inode, mask);
}

static int kernfs_xattr_get(const struct xattr_handler *handler,
			    struct dentry *unused, struct inode *inode,
			    const char *suffix, void *value, size_t size)
{
	const char *name = xattr_full_name(handler, suffix);
	struct kernfs_node *kn = inode->i_private;
	struct kernfs_iattrs *attrs;

	attrs = kernfs_iattrs(kn);
	if (!attrs)
		return -ENOMEM;

	return simple_xattr_get(&attrs->xattrs, name, value, size);
}

static int kernfs_xattr_set(const struct xattr_handler *handler,
			    struct dentry *unused, struct inode *inode,
			    const char *suffix, const void *value,
			    size_t size, int flags)
{
	const char *name = xattr_full_name(handler, suffix);
	struct kernfs_node *kn = inode->i_private;
	struct kernfs_iattrs *attrs;

	attrs = kernfs_iattrs(kn);
	if (!attrs)
		return -ENOMEM;

	return simple_xattr_set(&attrs->xattrs, name, value, size, flags);
}

static const struct xattr_handler kernfs_trusted_xattr_handler = {
	.prefix = XATTR_TRUSTED_PREFIX,
	.get = kernfs_xattr_get,
	.set = kernfs_xattr_set,
};

static int kernfs_security_xattr_set(const struct xattr_handler *handler,
				     struct dentry *unused, struct inode *inode,
				     const char *suffix, const void *value,
				     size_t size, int flags)
{
	struct kernfs_node *kn = inode->i_private;
	struct kernfs_iattrs *attrs;
	void *secdata;
	u32 secdata_len = 0;
	int error;

	attrs = kernfs_iattrs(kn);
	if (!attrs)
		return -ENOMEM;

	error = security_inode_setsecurity(inode, suffix, value, size, flags);
	if (error)
		return error;
	error = security_inode_getsecctx(inode, &secdata, &secdata_len);
	if (error)
		return error;

	mutex_lock(&kernfs_mutex);
	error = kernfs_node_setsecdata(attrs, &secdata, &secdata_len);
	mutex_unlock(&kernfs_mutex);

	if (secdata)
		security_release_secctx(secdata, secdata_len);
	return error;
}

static const struct xattr_handler kernfs_security_xattr_handler = {
	.prefix = XATTR_SECURITY_PREFIX,
	.get = kernfs_xattr_get,
	.set = kernfs_security_xattr_set,
};

const struct xattr_handler *kernfs_xattr_handlers[] = {
	&kernfs_trusted_xattr_handler,
	&kernfs_security_xattr_handler,
	NULL
};
