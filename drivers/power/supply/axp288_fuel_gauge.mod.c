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
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb162eda1, "iio_read_channel_raw" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x182b9d7, "power_supply_register" },
	{ 0xc107c9b6, "iio_channel_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x17475388, "_dev_warn" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x40120314, "single_open" },
	{ 0x195b708e, "power_supply_changed" },
	{ 0xe0503b42, "power_supply_get_drvdata" },
	{ 0xb9699601, "iio_channel_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0xdd65ca27, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp288_fuel_gauge");

MODULE_INFO(srcversion, "23DFDDD3C980941F6179925");
