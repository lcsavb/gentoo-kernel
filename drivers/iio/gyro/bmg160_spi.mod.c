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
	{ 0x3130e59d, "bmg160_pm_ops" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe0967186, "bmg160_core_probe" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x2ddebb9e, "bmg160_core_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bmg160_core,regmap-spi");

MODULE_ALIAS("spi:bmg160");
MODULE_ALIAS("spi:bmi055_gyro");

MODULE_INFO(srcversion, "F4DA84827BF05CEFC129E72");
