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
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0x2f7b44a9, "hid_validate_values" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xae359c03, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001038p00001410");

MODULE_INFO(srcversion, "EAC5A71DC5D03017E3DB4CD");
