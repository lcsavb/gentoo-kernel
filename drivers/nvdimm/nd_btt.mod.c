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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x6cfdb9c6, "nd_btt_version" },
	{ 0x416c7d7d, "badblocks_check" },
	{ 0x24d92314, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0x435135fb, "nd_integrity_init" },
	{ 0xb06a6b44, "nvdimm_namespace_capacity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfd17c3ef, "debugfs_create_x32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xaa3ba5c0, "nvdimm_namespace_disk_name" },
	{ 0x4240cb3b, "debugfs_create_u32" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xb9133164, "nd_region_acquire_lane" },
	{ 0xd2ab9151, "blk_alloc_queue" },
	{ 0x712e52f7, "current_task" },
	{ 0xb30b33d3, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8711fc21, "generic_start_io_acct" },
	{ 0xa191c788, "nd_region_release_lane" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x1d1b8616, "nd_dev_to_uuid" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0xdebef9be, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb2d2dc47, "nd_btt_arena_is_valid" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0x37a0cba, "kfree" },
	{ 0x51c663d6, "to_nd_region" },
	{ 0xfd6a73ea, "debugfs_create_u16" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc2329505, "nvdimm_revalidate_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0xb774f7c2, "page_endio" },
	{ 0xa195d129, "bio_integrity_prep" },
};

MODULE_INFO(depends, "libnvdimm");


MODULE_INFO(srcversion, "F2605550209986A9CB35631");
