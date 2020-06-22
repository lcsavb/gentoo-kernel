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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xa571ade0, "__platform_driver_probe" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xc5850110, "printk" },
	{ 0x6d253dca, "dmi_match" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x1a281859, "pv_ops" },
	{ 0x848d372e, "iowrite8" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*PCEngines*:pn*APU*:");

MODULE_INFO(srcversion, "A7F815AB7B948F58AF749AE");
