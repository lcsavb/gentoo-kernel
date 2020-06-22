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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xc5850110, "printk" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xe629aceb, "device_create" },
	{ 0x681e3cee, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x33650c48, "class_destroy" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E6FAEEFBBFEA16EA3FE1E8C");
