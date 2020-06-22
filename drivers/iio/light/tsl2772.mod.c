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
	{ 0x124bad4d, "kstrtobool" },
	{ 0x322e511e, "iio_push_event" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x868acba5, "get_options" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x76d60d47, "i2c_smbus_write_byte" },
	{ 0x12a38747, "usleep_range" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2571");
MODULE_ALIAS("of:N*T*Camstaos,tsl2571C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671");
MODULE_ALIAS("of:N*T*Camstaos,tsl2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671");
MODULE_ALIAS("of:N*T*Camstaos,tmd2671C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771");
MODULE_ALIAS("of:N*T*Camstaos,tsl2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771");
MODULE_ALIAS("of:N*T*Camstaos,tmd2771C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572");
MODULE_ALIAS("of:N*T*Camstaos,tsl2572C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672");
MODULE_ALIAS("of:N*T*Camstaos,tsl2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672");
MODULE_ALIAS("of:N*T*Camstaos,tmd2672C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772");
MODULE_ALIAS("of:N*T*Camstaos,tsl2772C*");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772");
MODULE_ALIAS("of:N*T*Camstaos,tmd2772C*");
MODULE_ALIAS("of:N*T*Cavago,apds9930");
MODULE_ALIAS("of:N*T*Cavago,apds9930C*");
MODULE_ALIAS("i2c:tsl2571");
MODULE_ALIAS("i2c:tsl2671");
MODULE_ALIAS("i2c:tmd2671");
MODULE_ALIAS("i2c:tsl2771");
MODULE_ALIAS("i2c:tmd2771");
MODULE_ALIAS("i2c:tsl2572");
MODULE_ALIAS("i2c:tsl2672");
MODULE_ALIAS("i2c:tmd2672");
MODULE_ALIAS("i2c:tsl2772");
MODULE_ALIAS("i2c:tmd2772");
MODULE_ALIAS("i2c:apds9930");

MODULE_INFO(srcversion, "F0908C717EC2BD297A5F2A0");
