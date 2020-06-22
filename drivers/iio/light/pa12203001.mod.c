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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:txcpa122");
MODULE_ALIAS("acpi*:TXCPA122:*");

MODULE_INFO(srcversion, "6C38982ED74A546D1AE1213");
