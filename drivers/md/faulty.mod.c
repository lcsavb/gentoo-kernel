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
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x735dd09f, "unregister_md_personality" },
	{ 0x5256d219, "bio_clone_fast" },
	{ 0xd5bbdf39, "disk_stack_limits" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x699e034f, "bio_put" },
	{ 0xed633a11, "md_set_array_sectors" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x53e80c93, "md_check_no_bitmap" },
	{ 0x84723080, "register_md_personality" },
	{ 0x181e27b, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "0F95D2C120715FC3BE34CFD");
