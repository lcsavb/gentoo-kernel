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
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("i2c:ad5272-020");
MODULE_ALIAS("i2c:ad5272-050");
MODULE_ALIAS("i2c:ad5272-100");
MODULE_ALIAS("i2c:ad5274-020");
MODULE_ALIAS("i2c:ad5274-100");

MODULE_INFO(srcversion, "24E1F27F209C2A9D84C8337");
