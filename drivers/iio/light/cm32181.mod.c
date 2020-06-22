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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd06095e5, "i2c_smbus_write_word_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("of:N*T*Ccapella,cm32181");
MODULE_ALIAS("of:N*T*Ccapella,cm32181C*");
MODULE_ALIAS("i2c:cm32181");

MODULE_INFO(srcversion, "A90C79023727D6498EFA3B1");
