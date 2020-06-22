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
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x550f97b4, "devm_request_any_context_irq" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x90ed21c, "devm_power_supply_register" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x67e1c81f, "gpiod_get_value" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0x195b708e, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,ltc3651-charger");
MODULE_ALIAS("of:N*T*Clltc,ltc3651-chargerC*");
MODULE_ALIAS("of:N*T*Clltc,lt3651-charger");
MODULE_ALIAS("of:N*T*Clltc,lt3651-chargerC*");

MODULE_INFO(srcversion, "ED14D59507C54D52A4F6B10");
