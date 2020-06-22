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
	{ 0xf9a482f9, "msleep" },
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x17475388, "_dev_warn" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
};

MODULE_INFO(depends, "i2c-mux,i2c-core");

MODULE_ALIAS("i2c:lgdt3306a");

MODULE_INFO(srcversion, "1A59210665C163B6D291814");
