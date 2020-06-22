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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x322e511e, "iio_push_event" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core");

MODULE_ALIAS("of:N*T*Cmaxim,max44009");
MODULE_ALIAS("of:N*T*Cmaxim,max44009C*");
MODULE_ALIAS("i2c:max44009");

MODULE_INFO(srcversion, "D0817E2A642FA37A316C95B");
