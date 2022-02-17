# AnyKernel3 Ramdisk Mod Script
# osm0sis @ xda-developers

## AnyKernel setup
# begin properties
properties() { '
do.devicecheck=1
do.modules=0
do.systemless=0
do.cleanup=1
do.cleanuponabort=0
supported.patchlevels=2021-04 - 
'; } # end properties

# shell variables
block=auto;
is_slot_device=0;
ramdisk_compression=auto;
patch_vbmeta_flag=0;

## AnyKernel methods (DO NOT CHANGE)
# import patching functions/variables - see for reference
. tools/ak3-core.sh;

## AnyKernel file attributes
# set permissions/ownership for included ramdisk files
set_perm_recursive 0 0 755 644 $ramdisk/*;
set_perm_recursive 0 0 750 750 $ramdisk/init* $ramdisk/sbin;

# TenSeventySeven 2021 - Enable Pageboost and RAM Plus
AK_FOLDER=/tmp/anykernel
mount /system/
mount /system_root/
mount /vendor/
mount -o rw,remount -t auto /system > /dev/null
mount -o rw,remount -t auto /vendor > /dev/null

fresh=$(file_getprop "/system_root/system/system_ext/fresh.prop" "ro.fresh.maintainer")
oneui=$(file_getprop "/system_root/system/build.prop" "ro.build.PDA")

if [ ! -z $oneui ]; then
	if [ -z $fresh ]; then
		ui_print "  - One UI detected!"
		ui_print "    - Enabling Pageboost and RAM Plus"
		patch_prop /vendor/build.prop 'ro.nandswap.level' '2'
		patch_prop /vendor/build.prop 'ro.nandswap.lru_ratio' '50'
		patch_prop /vendor/build.prop 'ro.sys.kernelmemory.nandswap.ux_support' 'true'
		patch_prop /vendor/build.prop 'ro.sys.kernelmemory.nandswap.daily_quota' '786432'
		patch_prop /vendor/build.prop 'ro.sys.kernelmemory.nandswap.daily_quota_limit' '2359296'
		patch_prop /vendor/build.prop 'ro.config.pageboost.vramdisk.minimize' "true"
		patch_prop /vendor/build.prop 'ro.config.pageboost.active_launch.enabled' "true"
		patch_prop /vendor/build.prop 'ro.config.pageboost.io_prefetch.enabled' "true"
		patch_prop /vendor/build.prop 'ro.config.pageboost.io_prefetch.level' "3"

		cp -rf $AK_FOLDER/files_oneui/system/etc/init/init.mint.rc /system/etc/init/init.mint.rc
		cp -rf $AK_FOLDER/files_oneui/system/etc/init/init.mint.rc /system_root/system/etc/init/init.mint.rc
		cp -rf $AK_FOLDER/files_oneui/vendor/etc/fstab.sqzr /vendor/etc/fstab.sqzr

		chmod 644 /system/etc/init/init.mint.rc
		chmod 644 /system_root/system/etc/init/init.mint.rc
		chmod 644 /vendor/etc/fstab.sqzr

		# Disable SSWAP for RAM Plus and Pageboost
		remove_section /vendor/etc/init/init.exynos9610.rc 'service swapon /system/bin/sswap -s -z -f 2048' 'oneshot'
		append_file /vendor/etc/init/init.exynos9610.rc 'swapon_all /vendor/etc/fstab.sqzr' init.ramplus.rc
		append_file /vendor/etc/init/init.exynos9610.rc 'start pageboostd' init.pageboost.rc
	else
		ui_print "  - FreshROMs detected! RAM Plus is already enabled!"
	fi
else
	ui_print "  - AOSP ROM detected!"
	ui_print "    - Enabling native ZRAM writeback"

	mkdir -p /vendor/overlay
	cp -rf $AK_FOLDER/files_aosp/vendor/overlay/MintZramWb.apk /vendor/overlay/MintZramWb.apk
	cp -rf $AK_FOLDER/files_aosp/vendor/etc/fstab.zram /vendor/etc/fstab.zram

	chmod 644 /vendor/overlay/MintZramWb.apk
	chmod 644 /vendor/etc/fstab.zram

	patch_prop /vendor/build.prop 'ro.zram.mark_idle_delay_mins' '60'
	patch_prop /vendor/build.prop 'ro.zram.first_wb_delay_mins' '1440'
	patch_prop /vendor/build.prop 'ro.zram.periodic_wb_delay_hours' '24'
	replace_line /vendor/etc/init/init.exynos9610.rc 'swapon_all /vendor/etc/fstab.exynos9610' 'swapon_all /vendor/etc/fstab.zram' global
	append_file /vendor/etc/init/init.exynos9610.rc 'swapon_all /vendor/etc/fstab.zram' init.zram.rc
fi

umount /system
umount /system_root
umount /vendor

## AnyKernel boot install
split_boot;

flash_boot;
## end boot install
