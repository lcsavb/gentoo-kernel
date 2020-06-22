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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xc6ea6fea, "iio_map_array_register" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x89852adc, "iio_map_array_unregister" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp288_adc");

MODULE_INFO(srcversion, "2BEA42EF1555A4179BDD488");
