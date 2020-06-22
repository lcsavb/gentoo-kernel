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
	{ 0x815588a6, "clk_enable" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x256446e8, "devm_regulator_get_optional" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17b8d3, "regulator_get_voltage" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x82c3710a, "spi_write_then_read" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:mcp3911");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3911");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp3911C*");

MODULE_INFO(srcversion, "75BAEA0A9C411818E5931E5");
