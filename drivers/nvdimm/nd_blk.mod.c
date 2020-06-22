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
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x6e03c6f8, "nvdimm_namespace_common_probe" },
	{ 0x24d92314, "generic_end_io_acct" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x435135fb, "nd_integrity_init" },
	{ 0xb06a6b44, "nvdimm_namespace_capacity" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6db0f76c, "is_nd_btt" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xaa3ba5c0, "nvdimm_namespace_disk_name" },
	{ 0xd2ab9151, "blk_alloc_queue" },
	{ 0x712e52f7, "current_task" },
	{ 0xb30b33d3, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xa5247273, "__nd_driver_register" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x8711fc21, "generic_start_io_acct" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x805f7a3b, "nvdimm_namespace_detach_btt" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0x4d5dd748, "nvdimm_namespace_attach_btt" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc2329505, "nvdimm_revalidate_disk" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0xa195d129, "bio_integrity_prep" },
};

MODULE_INFO(depends, "libnvdimm,nd_btt");


MODULE_INFO(srcversion, "1AD06B999B337EB81017D27");
