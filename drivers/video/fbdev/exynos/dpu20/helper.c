/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Helper file for Samsung EXYNOS DPU driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/clk.h>
#include <linux/err.h>
#include <linux/pm_runtime.h>
#include <asm/cacheflush.h>
#include <asm/page.h>
#if defined(CONFIG_EXYNOS_CONTENT_PATH_PROTECTION)
#include <linux/smc.h>
#endif
#if defined(CONFIG_SUPPORT_LEGACY_ION)
#include <linux/exynos_iovmm.h>
#endif

#include "decon.h"
#include "dsim.h"
#include "dpp.h"
#if defined(CONFIG_EXYNOS_DISPLAYPORT)
#include "displayport.h"
#endif
#include "./panels/lcd_ctrl.h"
#include <video/mipi_display.h>

static int __dpu_match_dev(struct device *dev, void *data)
{
	struct dpp_device *dpp;
	struct dsim_device *dsim;
#if defined(CONFIG_EXYNOS_DISPLAYPORT)
	struct displayport_device *displayport;
#endif
	struct decon_device *decon = (struct decon_device *)data;

	decon_dbg("%s: drvname(%s)\n", __func__, dev->driver->name);

	if (!strcmp(DPP_MODULE_NAME, dev->driver->name)) {
		dpp = (struct dpp_device *)dev_get_drvdata(dev);
		decon->dpp_sd[dpp->id] = &dpp->sd;
		decon_dbg("dpp%d sd name(%s) attr(0x%lx)\n", dpp->id,
				decon->dpp_sd[dpp->id]->name, dpp->attr);
	} else if (!strcmp(DSIM_MODULE_NAME, dev->driver->name)) {
		dsim = (struct dsim_device *)dev_get_drvdata(dev);
		decon->dsim_sd[dsim->id] = &dsim->sd;
		decon_dbg("dsim sd name(%s)\n", dsim->sd.name);
#if defined(CONFIG_EXYNOS_DISPLAYPORT)
	} else if (!strcmp(DISPLAYPORT_MODULE_NAME, dev->driver->name)) {
		displayport = (struct displayport_device *)dev_get_drvdata(dev);
		decon->displayport_sd = &displayport->sd;
		decon_dbg("displayport sd name(%s)\n", displayport->sd.name);
#endif
	} else {
		decon_err("failed to get driver name\n");
	}

	return 0;
}

int dpu_get_sd_by_drvname(struct decon_device *decon, char *drvname)
{
	struct device_driver *drv;
	struct device *dev;

	drv = driver_find(drvname, &platform_bus_type);
	if (IS_ERR_OR_NULL(drv)) {
		decon_err("failed to find driver\n");
		return -ENODEV;
	}

	dev = driver_find_device(drv, NULL, decon, __dpu_match_dev);

	return 0;
}

u32 dpu_translate_fmt_to_dpp(u32 format)
{
	switch (format) {
	/* YUV420 */
	case DECON_PIXEL_FORMAT_NV12:
		return DECON_PIXEL_FORMAT_NV21;
	case DECON_PIXEL_FORMAT_NV21:
		return DECON_PIXEL_FORMAT_NV12;
	case DECON_PIXEL_FORMAT_NV12N_10B:
		return DECON_PIXEL_FORMAT_NV12N_10B;
	case DECON_PIXEL_FORMAT_NV12M:
		return DECON_PIXEL_FORMAT_NV21M;
	case DECON_PIXEL_FORMAT_NV21M:
		return DECON_PIXEL_FORMAT_NV12M;
	case DECON_PIXEL_FORMAT_NV12N:
		return DECON_PIXEL_FORMAT_NV12N;
	case DECON_PIXEL_FORMAT_YUV420:
		return DECON_PIXEL_FORMAT_YVU420;
	case DECON_PIXEL_FORMAT_YVU420:
		return DECON_PIXEL_FORMAT_YUV420;
	case DECON_PIXEL_FORMAT_YUV420M:
		return DECON_PIXEL_FORMAT_YVU420M;
	case DECON_PIXEL_FORMAT_YVU420M:
		return DECON_PIXEL_FORMAT_YUV420M;
	/* YUV422 */
	case DECON_PIXEL_FORMAT_NV16:
		return DECON_PIXEL_FORMAT_NV61;
	case DECON_PIXEL_FORMAT_NV61:
		return DECON_PIXEL_FORMAT_NV16;
	/* RGB32 */
	case DECON_PIXEL_FORMAT_ARGB_8888:
		return DECON_PIXEL_FORMAT_BGRA_8888;
	case DECON_PIXEL_FORMAT_ABGR_8888:
		return DECON_PIXEL_FORMAT_RGBA_8888;
	case DECON_PIXEL_FORMAT_RGBA_8888:
		return DECON_PIXEL_FORMAT_ABGR_8888;
	case DECON_PIXEL_FORMAT_BGRA_8888:
		return DECON_PIXEL_FORMAT_ARGB_8888;
	case DECON_PIXEL_FORMAT_XRGB_8888:
		return DECON_PIXEL_FORMAT_BGRX_8888;
	case DECON_PIXEL_FORMAT_XBGR_8888:
		return DECON_PIXEL_FORMAT_RGBX_8888;
	case DECON_PIXEL_FORMAT_RGBX_8888:
		return DECON_PIXEL_FORMAT_XBGR_8888;
	case DECON_PIXEL_FORMAT_BGRX_8888:
		return DECON_PIXEL_FORMAT_XRGB_8888;
	default:
		return format;
	}
}

u32 dpu_get_bpp(enum decon_pixel_format fmt)
{
	switch (fmt) {
	case DECON_PIXEL_FORMAT_ARGB_8888:
	case DECON_PIXEL_FORMAT_ABGR_8888:
	case DECON_PIXEL_FORMAT_RGBA_8888:
	case DECON_PIXEL_FORMAT_BGRA_8888:
	case DECON_PIXEL_FORMAT_XRGB_8888:
	case DECON_PIXEL_FORMAT_XBGR_8888:
	case DECON_PIXEL_FORMAT_RGBX_8888:
	case DECON_PIXEL_FORMAT_BGRX_8888:
	case DECON_PIXEL_FORMAT_ARGB_2101010:
	case DECON_PIXEL_FORMAT_ABGR_2101010:
	case DECON_PIXEL_FORMAT_RGBA_1010102:
	case DECON_PIXEL_FORMAT_BGRA_1010102:
		return 32;

	case DECON_PIXEL_FORMAT_RGBA_5551:
	case DECON_PIXEL_FORMAT_RGB_565:
	case DECON_PIXEL_FORMAT_BGR_565:
		return 16;

	case DECON_PIXEL_FORMAT_NV12N_10B:
	case DECON_PIXEL_FORMAT_NV12M_S10B:
	case DECON_PIXEL_FORMAT_NV21M_S10B:
	case DECON_PIXEL_FORMAT_NV12M_P010:
	case DECON_PIXEL_FORMAT_NV21M_P010:
	/* YUV422 */
	case DECON_PIXEL_FORMAT_NV16M_P210:
	case DECON_PIXEL_FORMAT_NV61M_P210:
	case DECON_PIXEL_FORMAT_NV16M_S10B:
	case DECON_PIXEL_FORMAT_NV61M_S10B:
		return 15;

	case DECON_PIXEL_FORMAT_NV12:
	case DECON_PIXEL_FORMAT_NV21:
	case DECON_PIXEL_FORMAT_NV12M:
	case DECON_PIXEL_FORMAT_NV21M:
	case DECON_PIXEL_FORMAT_YUV420:
	case DECON_PIXEL_FORMAT_YVU420:
	case DECON_PIXEL_FORMAT_YUV420M:
	case DECON_PIXEL_FORMAT_YVU420M:
	case DECON_PIXEL_FORMAT_NV12N:
	/* YUV422 */
	case DECON_PIXEL_FORMAT_NV16:
	case DECON_PIXEL_FORMAT_NV61:
	case DECON_PIXEL_FORMAT_YVU422_3P:
		return 12;

	default:
		break;
	}

	return 0;
}

int dpu_get_meta_plane_cnt(enum decon_pixel_format format)
{
	switch (format) {
	case DECON_PIXEL_FORMAT_ARGB_8888:
	case DECON_PIXEL_FORMAT_ABGR_8888:
	case DECON_PIXEL_FORMAT_RGBA_8888:
	case DECON_PIXEL_FORMAT_BGRA_8888:
	case DECON_PIXEL_FORMAT_XRGB_8888:
	case DECON_PIXEL_FORMAT_XBGR_8888:
	case DECON_PIXEL_FORMAT_RGBX_8888:
	case DECON_PIXEL_FORMAT_BGRX_8888:
	case DECON_PIXEL_FORMAT_RGBA_5551:
	case DECON_PIXEL_FORMAT_RGB_565:
	case DECON_PIXEL_FORMAT_BGR_565:
	case DECON_PIXEL_FORMAT_NV12N:
	case DECON_PIXEL_FORMAT_NV16:
	case DECON_PIXEL_FORMAT_NV61:
	case DECON_PIXEL_FORMAT_NV12:
	case DECON_PIXEL_FORMAT_NV21:
	case DECON_PIXEL_FORMAT_NV12M:
	case DECON_PIXEL_FORMAT_NV21M:
	case DECON_PIXEL_FORMAT_YVU422_3P:
	case DECON_PIXEL_FORMAT_YUV420:
	case DECON_PIXEL_FORMAT_YVU420:
	case DECON_PIXEL_FORMAT_YUV420M:
	case DECON_PIXEL_FORMAT_YVU420M:
		return -1;

	case DECON_PIXEL_FORMAT_NV12N_10B:
	case DECON_PIXEL_FORMAT_ARGB_2101010:
	case DECON_PIXEL_FORMAT_ABGR_2101010:
	case DECON_PIXEL_FORMAT_RGBA_1010102:
	case DECON_PIXEL_FORMAT_BGRA_1010102:
		return 1;

	case DECON_PIXEL_FORMAT_NV12M_P010:
	case DECON_PIXEL_FORMAT_NV21M_P010:
	case DECON_PIXEL_FORMAT_NV12M_S10B:
	case DECON_PIXEL_FORMAT_NV21M_S10B:

	case DECON_PIXEL_FORMAT_NV16M_P210:
	case DECON_PIXEL_FORMAT_NV61M_P210:
	case DECON_PIXEL_FORMAT_NV16M_S10B:
	case DECON_PIXEL_FORMAT_NV61M_S10B:
		return 2;

	default:
		decon_err("%s: invalid format(%d)\n", __func__, format);
		return -1;
	}
}

int dpu_get_plane_cnt(enum decon_pixel_format format, bool is_hdr)
{
	switch (format) {
	case DECON_PIXEL_FORMAT_ARGB_8888:
	case DECON_PIXEL_FORMAT_ABGR_8888:
	case DECON_PIXEL_FORMAT_RGBA_8888:
	case DECON_PIXEL_FORMAT_BGRA_8888:
	case DECON_PIXEL_FORMAT_XRGB_8888:
	case DECON_PIXEL_FORMAT_XBGR_8888:
	case DECON_PIXEL_FORMAT_RGBX_8888:
	case DECON_PIXEL_FORMAT_BGRX_8888:
	case DECON_PIXEL_FORMAT_RGBA_5551:
	case DECON_PIXEL_FORMAT_RGB_565:
	case DECON_PIXEL_FORMAT_BGR_565:
	case DECON_PIXEL_FORMAT_NV12N:
		return 1;

	case DECON_PIXEL_FORMAT_NV12N_10B:
	case DECON_PIXEL_FORMAT_ARGB_2101010:
	case DECON_PIXEL_FORMAT_ABGR_2101010:
	case DECON_PIXEL_FORMAT_RGBA_1010102:
	case DECON_PIXEL_FORMAT_BGRA_1010102:
		if (is_hdr)
			return 2;
		else
			return 1;

	case DECON_PIXEL_FORMAT_NV16:
	case DECON_PIXEL_FORMAT_NV61:
	case DECON_PIXEL_FORMAT_NV12:
	case DECON_PIXEL_FORMAT_NV21:
	case DECON_PIXEL_FORMAT_NV12M:
	case DECON_PIXEL_FORMAT_NV21M:
		return 2;

	case DECON_PIXEL_FORMAT_NV12M_P010:
	case DECON_PIXEL_FORMAT_NV21M_P010:
	case DECON_PIXEL_FORMAT_NV12M_S10B:
	case DECON_PIXEL_FORMAT_NV21M_S10B:

	case DECON_PIXEL_FORMAT_NV16M_P210:
	case DECON_PIXEL_FORMAT_NV61M_P210:
	case DECON_PIXEL_FORMAT_NV16M_S10B:
	case DECON_PIXEL_FORMAT_NV61M_S10B:
		if (is_hdr)
			return 3;
		else
			return 2;

	case DECON_PIXEL_FORMAT_YVU422_3P:
	case DECON_PIXEL_FORMAT_YUV420:
	case DECON_PIXEL_FORMAT_YVU420:
	case DECON_PIXEL_FORMAT_YUV420M:
	case DECON_PIXEL_FORMAT_YVU420M:
		return 3;

	default:
		decon_err("%s: invalid format(%d)\n", __func__, format);
		return 1;
	}
}

u32 dpu_get_alpha_len(int format)
{
	switch (format) {
	case DECON_PIXEL_FORMAT_ARGB_8888:
	case DECON_PIXEL_FORMAT_ABGR_8888:
	case DECON_PIXEL_FORMAT_RGBA_8888:
	case DECON_PIXEL_FORMAT_BGRA_8888:
		return 8;

	case DECON_PIXEL_FORMAT_ABGR_4444:
	case DECON_PIXEL_FORMAT_RGBA_4444:
	case DECON_PIXEL_FORMAT_BGRA_4444:
		return 4;

	case DECON_PIXEL_FORMAT_ARGB_2101010:
	case DECON_PIXEL_FORMAT_ABGR_2101010:
	case DECON_PIXEL_FORMAT_RGBA_1010102:
	case DECON_PIXEL_FORMAT_BGRA_1010102:
		return 2;

	case DECON_PIXEL_FORMAT_RGBA_5551:
	case DECON_PIXEL_FORMAT_BGRA_5551:
		return 1;

	case DECON_PIXEL_FORMAT_XRGB_8888:
	case DECON_PIXEL_FORMAT_XBGR_8888:
	case DECON_PIXEL_FORMAT_RGBX_8888:
	case DECON_PIXEL_FORMAT_BGRX_8888:
	case DECON_PIXEL_FORMAT_RGB_565:
	case DECON_PIXEL_FORMAT_BGR_565:
		return 0;

	default:
		return 0;
	}
}

bool decon_intersect(struct decon_rect *r1, struct decon_rect *r2)
{
	return !(r1->left >= r2->right || r1->right <= r2->left ||
		r1->top >= r2->bottom || r1->bottom <= r2->top);
}

int decon_intersection(struct decon_rect *r1,
			struct decon_rect *r2, struct decon_rect *r3)
{
	r3->top = max(r1->top, r2->top);
	r3->bottom = min(r1->bottom, r2->bottom);
	r3->left = max(r1->left, r2->left);
	r3->right = min(r1->right, r2->right);
	return 0;
}

bool is_decon_rect_differ(struct decon_rect *r1, struct decon_rect *r2)
{
	return ((r1->left != r2->left) || (r1->top != r2->top) ||
		(r1->right != r2->right) || (r1->bottom != r2->bottom));
}

bool is_scaling(struct decon_win_config *config)
{
	return (config->dst.w != config->src.w) || (config->dst.h != config->src.h);
}

bool is_full(struct decon_rect *r, struct decon_lcd *lcd)
{
	return (r->left == 0) && (r->top == 0) &&
		(r->right == lcd->xres - 1) && (r->bottom == lcd->yres - 1);
}

bool is_rgb32(int format)
{
	switch (format) {
	case DECON_PIXEL_FORMAT_ARGB_8888:
	case DECON_PIXEL_FORMAT_ABGR_8888:
	case DECON_PIXEL_FORMAT_RGBA_8888:
	case DECON_PIXEL_FORMAT_BGRA_8888:
	case DECON_PIXEL_FORMAT_XRGB_8888:
	case DECON_PIXEL_FORMAT_XBGR_8888:
	case DECON_PIXEL_FORMAT_RGBX_8888:
	case DECON_PIXEL_FORMAT_BGRX_8888:
		return true;
	default:
		return false;
	}
}

bool is_decon_opaque_format(int format)
{
	switch (format) {
	case DECON_PIXEL_FORMAT_RGBA_8888:
	case DECON_PIXEL_FORMAT_BGRA_8888:
	case DECON_PIXEL_FORMAT_RGBA_5551:
	case DECON_PIXEL_FORMAT_ARGB_8888:
	case DECON_PIXEL_FORMAT_ABGR_8888:
	case DECON_PIXEL_FORMAT_ARGB_2101010:
	case DECON_PIXEL_FORMAT_ABGR_2101010:
	case DECON_PIXEL_FORMAT_RGBA_1010102:
	case DECON_PIXEL_FORMAT_BGRA_1010102:
		return false;

	default:
		return true;
	}
}

void dpu_unify_rect(struct decon_rect *r1, struct decon_rect *r2,
		struct decon_rect *dst)
{
	dst->top = min(r1->top, r2->top);
	dst->bottom = max(r1->bottom, r2->bottom);
	dst->left = min(r1->right, r2->right);
	dst->right = max(r1->right, r2->right);
}

void decon_to_psr_info(struct decon_device *decon, struct decon_mode_info *psr)
{
	psr->psr_mode = decon->dt.psr_mode;
	psr->trig_mode = decon->dt.trig_mode;
	psr->dsi_mode = decon->dt.dsi_mode;
	psr->out_type = decon->dt.out_type;
}

void decon_to_init_param(struct decon_device *decon, struct decon_param *p)
{
	struct decon_lcd *lcd_info = decon->lcd_info;
	struct v4l2_mbus_framefmt mbus_fmt;

	mbus_fmt.width = 0;
	mbus_fmt.height = 0;
	mbus_fmt.code = 0;
	mbus_fmt.field = 0;
	mbus_fmt.colorspace = 0;

	p->lcd_info = lcd_info;
	p->psr.psr_mode = decon->dt.psr_mode;
	p->psr.trig_mode = decon->dt.trig_mode;
	p->psr.dsi_mode = decon->dt.dsi_mode;
	p->psr.out_type = decon->dt.out_type;
	p->nr_windows = decon->dt.max_win;
	p->disp_ss_regs = decon->res.ss_regs;
	decon_dbg("%s: psr(%d) trig(%d) dsi(%d) out(%d) wins(%d) LCD[%d %d]\n",
			__func__, p->psr.psr_mode, p->psr.trig_mode,
			p->psr.dsi_mode, p->psr.out_type, p->nr_windows,
			decon->lcd_info->xres, decon->lcd_info->yres);
}

void dpu_debug_printk(const char *function_name, const char *format, ...)
{
	struct va_format vaf;
	va_list args;

	va_start(args, format);
	vaf.fmt = format;
	vaf.va = &args;

	printk(KERN_INFO "[%s] %pV", function_name, &vaf);

	va_end(args);
}

void __iomem *dpu_get_sysreg_addr(void)
{
	void __iomem *regs;

	if (of_have_populated_dt()) {
		struct device_node *nd;
		nd = of_find_compatible_node(NULL, NULL,
				"samsung,exynos9-disp_ss");
		if (!nd) {
			decon_err("failed find compatible node(sysreg-disp)");
			return NULL;
		}

		regs = of_iomap(nd, 0);
		if (!regs) {
			decon_err("Failed to get sysreg-disp address.");
			return NULL;
		}
	} else {
		decon_err("failed have populated device tree");
		return NULL;
	}

	return regs;
}

#if defined(CONFIG_EXYNOS_CONTENT_PATH_PROTECTION)
static int decon_get_protect_id(int dma_id)
{
	int prot_id = 0;

	switch (dma_id) {
	case IDMA_G0:
		prot_id = PROT_G0;
		break;
	case IDMA_G1:
		prot_id = PROT_G1;
		break;
	case IDMA_GF:
		prot_id = PROT_GF;
		break;
	case IDMA_VG0:
		prot_id = PROT_VG0;
		break;
	default:
		decon_err("Unknown DMA_ID (%d)\n", dma_id);
		break;
	}

	return prot_id;
}

static int decon_control_protection(int dma_id, bool en)
{
	int ret = SUCCESS_EXYNOS_SMC;
	int prot_id;

	prot_id = decon_get_protect_id(dma_id);
	ret = exynos_smc(SMC_PROTECTION_SET, 0, prot_id,
		(en ? SMC_PROTECTION_ENABLE : SMC_PROTECTION_DISABLE));

	if (ret)
		decon_err("DMA%d (en=%d): exynos_smc call fail (err=%d)\n",
			dma_id, en, ret);
	else
		decon_dbg("DMA%d protection %s\n",
			dma_id, en ? "enabled" : "disabled");

	return ret;
}

void decon_set_protected_content(struct decon_device *decon,
		struct decon_reg_data *regs)
{
	bool en;
	int dma_id, i, ret = 0;
	u32 change = 0;
	u32 cur_protect_bits = 0;

	/* IDMA protection configs (G0,G1,VG0,VG1,VGF0,VGF1) */
	for (i = 0; i < decon->dt.max_win; i++) {
		if (!regs)
			break;

		cur_protect_bits |=
			(regs->protection[i] << regs->dpp_config[i].idma_type);
	}

	/* ODMA protection config (WB: writeback) */
	if (decon->dt.out_type == DECON_OUT_WB)
		if (regs)
			cur_protect_bits |= (regs->protection[decon->dt.max_win] << ODMA_WB);

	if (decon->prev_protection_bitmask != cur_protect_bits) {

		/* apply protection configs for each DMA */
		for (dma_id = 0; dma_id < decon->dt.max_win; dma_id++) {
			/*
			 * This loop should use max_win instead of dpp_cnt,
			 * because dpp_cnt includes writeback case
			 */
			en = cur_protect_bits & (1 << dma_id);

			change = (cur_protect_bits & (1 << dma_id)) ^
				(decon->prev_protection_bitmask & (1 << dma_id));

			if (change)
				ret = decon_control_protection(dma_id, en);
		}
	}

	/* save current portection configs */
	decon->prev_protection_bitmask = cur_protect_bits;
}
#endif

#if defined(DPU_DUMP_BUFFER_IRQ)
/* id : VGF0=0, VGF1=1 */
static void dpu_dump_data_to_console(void *v_addr, int buf_size, int id)
{
	dpp_info("=== (CH#%d) Frame Buffer Data(128 Bytes) ===\n", id);

	print_hex_dump(KERN_INFO, "", DUMP_PREFIX_ADDRESS, 32, 4,
			v_addr, buf_size, false);
}

void dpu_dump_afbc_info(void)
{
	int i, j;
	struct decon_device *decon;
	struct dpu_afbc_info *afbc_info;
	void *v_addr[MAX_DECON_WIN];
	int size[MAX_DECON_WIN];
	int decon_cnt;

	decon_cnt = get_decon_drvdata(0)->dt.decon_cnt;

	for (i = 0; i < decon_cnt; i++) {
		decon = get_decon_drvdata(i);
		if (decon == NULL)
			continue;

		afbc_info = &decon->d.prev_afbc_info;
		decon_info("%s: previous AFBC channel information\n", __func__);
		for (j = 0; j < decon->dt.max_win; ++j) { /* all the dpp that has afbc */
			if (!afbc_info->is_afbc[j])
				continue;

			v_addr[j] = dma_buf_vmap(afbc_info->dma_buf[j]);
			size[j] = afbc_info->dma_buf[j]->size;
			decon_info("\t[DMA%d] Base(0x%p), KV(0x%p), size(%d)\n",
					j, (void *)afbc_info->dma_addr[j],
					v_addr[j], size[j]);
			dma_buf_vunmap(afbc_info->dma_buf[j], v_addr[j]);
		}

		afbc_info = &decon->d.cur_afbc_info;
		decon_info("%s: current AFBC channel information\n", __func__);
		for (j = 0; j < decon->dt.max_win; ++j) { /* all the dpp that has afbc */
			if (!afbc_info->is_afbc[j])
				continue;

			v_addr[j] = dma_buf_vmap(afbc_info->dma_buf[j]);
			size[j] = afbc_info->dma_buf[j]->size;
			decon_info("\t[DMA%d] Base(0x%p), KV(0x%p), size(%d)\n",
					j, (void *)afbc_info->dma_addr[j],
					v_addr[j], size[j]);
			dma_buf_vunmap(afbc_info->dma_buf[j], v_addr[j]);
		}
	}
}

static int dpu_dump_buffer_data(struct dpp_device *dpp)
{
	int i;
	int id_idx = 0;
	int dump_size = 128;
	int decon_cnt;
	struct decon_device *decon;
	struct dpu_afbc_info *afbc_info;

	decon_cnt = get_decon_drvdata(0)->dt.decon_cnt;

	if (dpp->state == DPP_STATE_ON) {

		for (i = 0; i < decon_cnt; i++) {
			decon = get_decon_drvdata(i);
			if (decon == NULL)
				continue;

			id_idx = dpp->id;

			afbc_info = &decon->d.cur_afbc_info;
			if (!afbc_info->is_afbc[id_idx])
				continue;

			if (afbc_info->dma_buf[id_idx]->size > 2048)
				dump_size = 128;
			else
				dump_size = afbc_info->dma_buf[id_idx]->size / 16;

			decon_info("Base(0x%p), KV(0x%p), size(%d)\n",
				(void *)afbc_info->dma_addr[id_idx],
				afbc_info->dma_v_addr[id_idx], dump_size);

			dpu_dump_data_to_console(afbc_info->dma_v_addr[id_idx],
					dump_size, dpp->id);
		}
	}

	return 0;
}
#endif

int dpu_sysmmu_fault_handler(struct iommu_domain *domain,
	struct device *dev, unsigned long iova, int flags, void *token)
{
	struct decon_device *decon = NULL;

	if (!strcmp(DSIM_MODULE_NAME, dev->driver->name)) {
		decon = get_decon_drvdata(0);
#if defined(CONFIG_EXYNOS_DISPLAYPORT)
	} else if (!strcmp(DISPLAYPORT_MODULE_NAME, dev->driver->name)) {
		decon = get_decon_drvdata(2);
#endif
	} else {
		decon_err("unknown driver for dpu sysmmu falut handler(%s)\n",
				dev->driver->name);
		return -EINVAL;
	}

	if (decon)
		decon_dump(decon);

	return 0;
}

#if defined(CONFIG_EXYNOS_PD)
int dpu_pm_domain_check_status(struct exynos_pm_domain *pm_domain)
{
	if (!pm_domain || !pm_domain->check_status)
		return 0;

	if (pm_domain->check_status(pm_domain))
		return 1;
	else
		return 0;
}
#endif

void dsim_to_regs_param(struct dsim_device *dsim, struct dsim_regs *regs)
{
	if (dsim->res.regs)
		regs->regs = dsim->res.regs;
	else
		regs->regs = NULL;

	if (dsim->res.phy_regs)
		regs->phy_regs = dsim->res.phy_regs;
	else
		regs->phy_regs = NULL;

	if (dsim->res.phy_regs_ex)
		regs->phy_regs_ex = dsim->res.phy_regs_ex;
	else
		regs->phy_regs_ex = NULL;
}
