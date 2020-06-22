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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xb678366f, "int_sqrt" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio,regmap-i2c");

MODULE_ALIAS("of:N*T*Cmelexis,mlx90632");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90632C*");
MODULE_ALIAS("i2c:mlx90632");

MODULE_INFO(srcversion, "839F440E7DCAEE13D93EEBE");
