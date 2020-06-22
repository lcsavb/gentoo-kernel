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
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcafe87d6, "regmap_field_read" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x930b0849, "devm_hwmon_device_register_with_info" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1230fc15, "devm_regmap_field_alloc" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0x412512d2, "regmap_field_update_bits_base" },
	{ 0xd326faaf, "regcache_cache_only" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221");
MODULE_ALIAS("of:N*T*Cti,ina3221C*");

MODULE_INFO(srcversion, "C0350252F38F4E53D702951");
