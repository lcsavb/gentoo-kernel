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
	{ 0x7307f39d, "bmc150_accel_pm_ops" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa9e6a828, "bmc150_accel_core_probe" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xa9293663, "bmc150_regmap_conf" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0xd54c3f56, "bmc150_accel_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmc150-accel-core,regmap-spi");

MODULE_ALIAS("spi:bmc150_accel");
MODULE_ALIAS("spi:bmi055_accel");
MODULE_ALIAS("spi:bma255");
MODULE_ALIAS("spi:bma250e");
MODULE_ALIAS("spi:bma222e");
MODULE_ALIAS("spi:bma280");
MODULE_ALIAS("acpi*:BSBA0150:*");
MODULE_ALIAS("acpi*:BMC150A:*");
MODULE_ALIAS("acpi*:BMI055A:*");
MODULE_ALIAS("acpi*:BMA0255:*");
MODULE_ALIAS("acpi*:BMA250E:*");
MODULE_ALIAS("acpi*:BMA222E:*");
MODULE_ALIAS("acpi*:BMA0280:*");

MODULE_INFO(srcversion, "1C90C3FE5DD5224340AC17A");
