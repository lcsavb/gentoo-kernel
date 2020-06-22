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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7c4974c4, "devm_rtc_device_register" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xcebe7641, "spi_setup" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "regmap-spi");


MODULE_INFO(srcversion, "B789BDCBC93AAB112C8704A");
