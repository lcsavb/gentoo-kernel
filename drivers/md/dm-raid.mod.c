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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x70a48bc, "dm_unregister_target" },
	{ 0x541dfd75, "dm_register_target" },
	{ 0x56a9aadc, "raid5_set_cache_size" },
	{ 0x7b320017, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x3af0e783, "md_start" },
	{ 0x54c4697, "md_run" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x425be464, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xee988a4f, "dm_set_target_max_io_len" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x9c3c65d2, "md_rdev_init" },
	{ 0xf5cd7672, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x96848186, "scnprintf" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xfb578fc5, "memset" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0x433612e3, "dm_disk" },
	{ 0xea7b8962, "dm_table_get_md" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6b0b6c0e, "mddev_resume" },
	{ 0x2b0a0253, "md_error" },
	{ 0xe5aedfd2, "sync_page_io" },
	{ 0xdcd98c5c, "md_wakeup_thread" },
	{ 0xc153c820, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3228c8f0, "mddev_congested" },
	{ 0xfea55198, "md_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x6447e654, "dm_put_device" },
	{ 0x94a9ed09, "md_rdev_clear" },
	{ 0xdf6ed8c2, "md_handle_request" },
	{ 0xfca2f8dd, "md_stop_writes" },
	{ 0x5202d63, "mddev_suspend" },
	{ 0x5e90d035, "md_bitmap_load" },
	{ 0xa3ac1e56, "md_bitmap_resize" },
	{ 0x75334c8a, "mddev_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9464b125, "md_update_sb" },
	{ 0xc5850110, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dm-mod,raid456,md-mod");


MODULE_INFO(srcversion, "70C481B4A9EEB9CABDA2D43");
