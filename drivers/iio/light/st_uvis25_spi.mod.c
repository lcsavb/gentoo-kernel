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
	{ 0x3301f84f, "st_uvis25_pm_ops" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x534f825d, "st_uvis25_probe" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_uvis25_core,regmap-spi");

MODULE_ALIAS("spi:uvis25");
MODULE_ALIAS("of:N*T*Cst,uvis25");
MODULE_ALIAS("of:N*T*Cst,uvis25C*");

MODULE_INFO(srcversion, "7F56FF720AB1225ACB08BAC");
