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
	{ 0x11688d0e, "adxl372_readable_noinc_reg" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0x47767921, "adxl372_probe" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adxl372,regmap-spi");

MODULE_ALIAS("of:N*T*Cadi,adxl372");
MODULE_ALIAS("of:N*T*Cadi,adxl372C*");
MODULE_ALIAS("spi:adxl372");

MODULE_INFO(srcversion, "DDAF8EEB3186A44C09A2305");
