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
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0xa237363f, "ad_sd_validate_trigger" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2e047e52, "ad_sd_init" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xd8d1e53f, "ad_sigma_delta_single_conversion" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x31b6ea3d, "ad_sd_write_reg" },
	{ 0xd4f5e4e2, "ad_sd_read_reg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xee960c0, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ad_sigma_delta");

MODULE_ALIAS("of:N*T*Cadi,ad7124-4");
MODULE_ALIAS("of:N*T*Cadi,ad7124-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7124-8");
MODULE_ALIAS("of:N*T*Cadi,ad7124-8C*");
MODULE_ALIAS("spi:ad7124-4");
MODULE_ALIAS("spi:ad7124-8");

MODULE_INFO(srcversion, "9A97D547FBBC5C89CFEC72A");
