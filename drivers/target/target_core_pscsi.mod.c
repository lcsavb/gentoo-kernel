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
	{ 0x651d81e1, "passthrough_attrib_attrs" },
	{ 0xfb956de, "target_backend_unregister" },
	{ 0x5e13ca39, "transport_backend_register" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x182a0dc7, "blkdev_get_by_path" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3a20a9d7, "transport_set_vpd_ident_type" },
	{ 0x142072c0, "transport_set_vpd_assoc" },
	{ 0xf3c2dfe0, "transport_set_vpd_proto_id" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x871ffd6, "transport_set_vpd_ident" },
	{ 0xd3b3f756, "__scsi_execute" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf6c921db, "blk_execute_rq_nowait" },
	{ 0x87b8798d, "sg_next" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0x8e667563, "blk_rq_append_bio" },
	{ 0x43d6a0ba, "bio_add_pc_page" },
	{ 0x9e34b64e, "blk_get_request" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x7a3c89f4, "passthrough_parse_cdb" },
	{ 0x37aa31bc, "scsi_host_lookup" },
	{ 0x35b84b72, "blkdev_put" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4e3567f7, "match_int" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x699e034f, "bio_put" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x4bb052df, "transport_kunmap_data_sg" },
	{ 0x832e5141, "transport_kmap_data_sg" },
	{ 0xc953d946, "target_lun_is_rdonly" },
	{ 0x20bf72f9, "target_complete_cmd_with_length" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8b3ef71a, "transport_copy_sense_to_cmd" },
	{ 0x41d7f5a3, "blk_put_request" },
	{ 0xf8094f51, "target_complete_cmd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a281859, "pv_ops" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "7F9FDD1833997CF928968DA");
