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
	{ 0x58605230, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x5202d63, "mddev_suspend" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x735dd09f, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0xeec54807, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xd5bbdf39, "disk_stack_limits" },
	{ 0xc8dfc131, "bio_chain" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0xdfac1770, "bio_endio" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xed633a11, "md_set_array_sectors" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b0b6c0e, "mddev_resume" },
	{ 0x53e80c93, "md_check_no_bitmap" },
	{ 0x9974f22f, "md_integrity_register" },
	{ 0x84723080, "register_md_personality" },
	{ 0x181e27b, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "D5D73E7CB11DF4C476ECE5C");
