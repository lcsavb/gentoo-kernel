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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0x17b8d3, "regulator_get_voltage" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,regmap-spi");

MODULE_ALIAS("spi:ltc1660");
MODULE_ALIAS("spi:ltc1665");
MODULE_ALIAS("of:N*T*Clltc,ltc1660");
MODULE_ALIAS("of:N*T*Clltc,ltc1660C*");
MODULE_ALIAS("of:N*T*Clltc,ltc1665");
MODULE_ALIAS("of:N*T*Clltc,ltc1665C*");

MODULE_INFO(srcversion, "AA58BF7B313C25DE1B347C5");
