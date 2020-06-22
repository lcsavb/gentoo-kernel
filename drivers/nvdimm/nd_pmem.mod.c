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
	{ 0x813bd2d3, "nd_btt_probe" },
	{ 0x3ed4deb1, "to_nd_pfn" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x77358855, "iomem_resource" },
	{ 0xf75f655b, "devm_init_badblocks" },
	{ 0xa295bae7, "badblocks_clear" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x6e03c6f8, "nvdimm_namespace_common_probe" },
	{ 0x95465b59, "is_nd_pfn" },
	{ 0x416c7d7d, "badblocks_check" },
	{ 0x7242d92, "put_dax" },
	{ 0x24d92314, "generic_end_io_acct" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8135613, "dax_write_cache" },
	{ 0xdb171e14, "devm_nsio_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xce5597f7, "devm_memremap_pages" },
	{ 0xfa03645f, "kernfs_put" },
	{ 0xa0b83658, "blk_freeze_queue_start" },
	{ 0xb23724c5, "is_nvdimm_sync" },
	{ 0xbbed0bb2, "nd_dax_probe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0x58eff1c6, "blk_alloc_queue_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf065cdd2, "nd_pfn_probe" },
	{ 0x5eb18f9c, "nvdimm_flush" },
	{ 0x6db0f76c, "is_nd_btt" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xaa3ba5c0, "nvdimm_namespace_disk_name" },
	{ 0x17475388, "_dev_warn" },
	{ 0x259badda, "devm_nsio_enable" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0x712e52f7, "current_task" },
	{ 0xb30b33d3, "to_nd_btt" },
	{ 0x65a4f577, "pmem_sector_size" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xa5247273, "__nd_driver_register" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x2bc339ce, "dax_attribute_group" },
	{ 0x2a753810, "nvdimm_clear_poison" },
	{ 0x35f03a67, "kernfs_find_and_get_ns" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xd839242, "_copy_to_iter_mcsafe" },
	{ 0x8711fc21, "generic_start_io_acct" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x3d82cc18, "pmem_should_map_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4bb0705d, "nvdimm_has_flush" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xe81451be, "__generic_fsdax_supported" },
	{ 0x805f7a3b, "nvdimm_namespace_detach_btt" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0x25a3a3bd, "nvdimm_badblocks_populate" },
	{ 0x8f6ab57e, "blk_queue_physical_block_size" },
	{ 0x4d5dd748, "nvdimm_namespace_attach_btt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa4dbe62c, "nvdimm_setup_pfn" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x84d28bbf, "_copy_from_iter_flushcache" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7224ac98, "kernfs_notify" },
	{ 0xf33e45a2, "alloc_dax" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x833c3313, "__memcpy_mcsafe" },
	{ 0xcb8571b8, "blk_queue_write_cache" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99c011d8, "mcsafe_key" },
	{ 0x51c663d6, "to_nd_region" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc2329505, "nvdimm_revalidate_disk" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xd070418c, "devm_memremap" },
	{ 0xc3fa65ae, "nvdimm_has_cache" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0xb774f7c2, "page_endio" },
};

MODULE_INFO(depends, "libnvdimm,nd_btt");


MODULE_INFO(srcversion, "535C593B0D9AFD9B9BD3984");
