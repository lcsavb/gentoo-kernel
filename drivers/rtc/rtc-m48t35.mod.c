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
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x7c4974c4, "devm_rtc_device_register" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3C2AC0FA2A39588B44B6AF");
