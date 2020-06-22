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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17475388, "_dev_warn" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1bf4252e, "iio_device_attach_buffer" },
	{ 0x454bfaca, "devm_iio_kfifo_allocate" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0xf155960f, "i2c_smbus_read_i2c_block_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio,regmap-i2c,kfifo_buf");

MODULE_ALIAS("of:N*T*Cmaxim,max30100");
MODULE_ALIAS("of:N*T*Cmaxim,max30100C*");
MODULE_ALIAS("i2c:max30100");

MODULE_INFO(srcversion, "3A7E3FBD52114CEFDE13062");
