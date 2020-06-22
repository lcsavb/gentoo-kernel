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
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2cc813ee, "regmap_get_device" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xbead065b, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "D9DD809574246BA0694731A");
