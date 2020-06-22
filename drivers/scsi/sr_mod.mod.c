#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x545fa907, "scsi_set_medium_removal" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x4915d83d, "cdrom_number_of_slots" },
	{ 0xed6e3872, "scsi_ioctl_block_when_processing_errors" },
	{ 0xfd88861d, "unregister_cdrom" },
	{ 0xc7ab786, "blk_dump_rq_flags" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc248c7e6, "cdrom_open" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x679a153d, "scsi_autopm_get_device" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x801e67cd, "check_disk_change" },
	{ 0xd2fe0068, "cdrom_release" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xd3b3f756, "__scsi_execute" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x74b36a28, "cdrom_get_media_event" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x21aa75c7, "cdrom_check_events" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x1a013df6, "cdrom_get_last_written" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x26584827, "scsi_ioctl" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x3ba5bb9c, "scsi_register_driver" },
	{ 0x7920c748, "scsi_block_when_processing_errors" },
	{ 0x55750872, "scsi_test_unit_ready" },
	{ 0x198afc64, "scsi_init_io" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x51184310, "cdrom_ioctl" },
	{ 0xd8fbc2a, "blk_pm_runtime_init" },
	{ 0x406e1166, "register_cdrom" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0x118cd239, "scsi_autopm_put_device" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x9805d229, "scsi_mode_sense" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "802275DE04F1FDBB92B348A");
