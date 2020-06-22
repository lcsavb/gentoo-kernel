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
	{ 0x766a0927, "mempool_alloc_pages" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x19fe0d95, "t10_pi_type1_ip" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0xed6e3872, "scsi_ioctl_block_when_processing_errors" },
	{ 0xa3f9eb19, "blk_mq_unfreeze_queue" },
	{ 0xedf2391, "blk_queue_io_min" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xd0bbd1ec, "scsi_mode_select" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x47f7121f, "blk_mq_freeze_queue" },
	{ 0x21dd6a18, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5e2a01ba, "blk_queue_chunk_sectors" },
	{ 0xa4a02e20, "blk_queue_alignment_offset" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0x3d706090, "scsi_print_command" },
	{ 0x1d4c914d, "scsi_cmd_blk_ioctl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x679a153d, "scsi_autopm_get_device" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x815fda83, "sed_ioctl" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x7533a30b, "device_del" },
	{ 0x712e52f7, "current_task" },
	{ 0x801e67cd, "check_disk_change" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xefe37f23, "blk_queue_max_discard_sectors" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0x1b13d538, "class_unregister" },
	{ 0xaf3dd7dc, "scsi_logging_level" },
	{ 0xd3b3f756, "__scsi_execute" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x928fc44, "blk_register_region" },
	{ 0xa9038e86, "scsi_report_opcode" },
	{ 0x5a921311, "strncmp" },
	{ 0xd985dc99, "mempool_free_pages" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x2ea111e, "scsi_driverbyte_string" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x48a91171, "string_get_size" },
	{ 0x45cd73e1, "device_add" },
	{ 0xc1e761a9, "blk_revalidate_disk_zones" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xcaf2c603, "scsi_sd_pm_domain" },
	{ 0x633e5ef5, "t10_pi_type3_ip" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x93b5df44, "t10_pi_type3_crc" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x94bd2068, "put_device" },
	{ 0x8f6ab57e, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8d0a1e7d, "scsi_verify_blk_ioctl" },
	{ 0x26584827, "scsi_ioctl" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x1953c958, "mempool_create" },
	{ 0x3ba5bb9c, "scsi_register_driver" },
	{ 0x7920c748, "scsi_block_when_processing_errors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x55750872, "scsi_test_unit_ready" },
	{ 0x6b5eeab4, "scsi_device_set_state" },
	{ 0x198afc64, "scsi_init_io" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x26c9f806, "blk_queue_required_elevator_features" },
	{ 0xb3d2c76d, "scsi_hostbyte_string" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x2aefeba4, "scsi_command_normalize_sense" },
	{ 0xd94181ab, "get_device" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xa8aa0773, "scsicam_bios_param" },
	{ 0xcb8571b8, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x6ca4bf88, "async_synchronize_full_domain" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xde7d7e4f, "t10_pi_type1_crc" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x72606b64, "scsi_get_vpd_page" },
	{ 0xdd849d51, "scsi_get_sense_info_fld" },
	{ 0x15af7f4, "system_state" },
	{ 0xd8fbc2a, "blk_pm_runtime_init" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xb0e602eb, "memmove" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0x118cd239, "scsi_autopm_put_device" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x9805d229, "scsi_mode_sense" },
	{ 0x94dcfea7, "blk_queue_max_write_same_sectors" },
	{ 0x12ec9539, "blk_integrity_register" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x233e1d07, "scsi_print_sense_hdr" },
	{ 0xff76cbba, "set_disk_ro" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "374D3141C59900DEE55A50B");
