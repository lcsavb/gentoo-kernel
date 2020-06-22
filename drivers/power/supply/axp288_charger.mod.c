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
	{ 0x4391f7a4, "extcon_get_state" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x22451f86, "devm_extcon_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa9e6a3d1, "devm_extcon_register_notifier_all" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x90ed21c, "devm_power_supply_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x5110b3c9, "extcon_get_extcon_dev" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x195b708e, "power_supply_changed" },
	{ 0x17475388, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_charger");

MODULE_INFO(srcversion, "41573793E18DEB1978D8338");
