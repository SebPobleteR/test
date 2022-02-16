# AnyKernel3 Ramdisk Mod Script
# osm0sis @ xda-developers

## AnyKernel setup
# begin properties
properties() { '
do.devicecheck=1
do.modules=0
do.modulenf=1
do.systemless=0
do.cleanup=1
do.cleanuponabort=0
device.name1=a50
device.name2=a50dd
device.name3=a50xx
device.name4=a50*
device.name5=
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

## AnyKernel boot install
split_boot;

# TenSeventySeven 2021 - Enable Pageboost and RAM Plus
fresh=$(file_getprop "/system_root/system/system_ext/fresh.prop" "ro.fresh.maintainer")
oneui=$(file_getprop "/system_root/system/build.prop" "ro.build.PDA")

if [ ! -z $oneui ]; then
	if [ -z $fresh ]; then
		ui_print "  - Enabling Pageboost and RAM Plus for non-Fresh ROM"
		patch_prop /vendor/build.prop 'ro.sys.kernelmemory.nandswap.daily_quota' '786432'
		patch_prop /vendor/build.prop 'ro.sys.kernelmemory.nandswap.daily_quota_limit' '2359296'
		patch_prop /vendor/build.prop 'ro.config.pageboost.vramdisk.minimize' "true"
		patch_prop /vendor/build.prop 'ro.config.pageboost.active_launch.enabled' "true"
		patch_prop /vendor/build.prop 'ro.config.pageboost.io_prefetch.enabled' "true"
		patch_prop /vendor/build.prop 'ro.config.pageboost.io_prefetch.level' "3"

		# Disable SSWAP for RAM Plus and Pageboost
		replace_string /vendor/etc/init/init.exynos9610.rc 'service swapon /system/bin/sswap -s -z -f 2048\n    class core\n    user system\n    group system\n    capabilities SYS_ADMIN\n    seclabel u:r:sswap:s0\n    oneshot\n    disabled' 'service swapon /system/bin/sswap -s -z -f 2048\n    class core\n    user system\n    group system\n    capabilities SYS_ADMIN\n    seclabel u:r:sswap:s0\n    oneshot' 'service swapon /system/bin/sswap -s -z -f 2048\n    class core\n    user system\n    group system\n    capabilities SYS_ADMIN\n    seclabel u:r:sswap:s0\n    oneshot\n    disabled'
		insert_line /vendor/etc/init/init.exynos9610.rc 'swapon_all /vendor/etc/fstab.sqzr' before '# tracking activation VNG' 'on property:sys.boot_completed=1\n    swapon_all /vendor/etc/fstab.sqzr'
		insert_line /vendor/etc/init/init.exynos9610.rc 'start pageboostd' before '# tracking activation VNG' '# Pageboostd\non property:sys.boot_completed=1\n    start pageboostd\n\nservice pageboostd /system/bin/pageboostd\n    class main\n    user system\n    group system mount radio net_bt sdcard_rw shell media media_rw\n    socket pageboostd seqpacket 0660 system system\n    disabled\n'
	fi
fi

flash_boot;
## end boot install
