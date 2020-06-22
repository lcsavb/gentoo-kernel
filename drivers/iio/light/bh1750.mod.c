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
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x76d60d47, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio");

MODULE_ALIAS("of:N*T*Crohm,bh1710");
MODULE_ALIAS("of:N*T*Crohm,bh1710C*");
MODULE_ALIAS("of:N*T*Crohm,bh1715");
MODULE_ALIAS("of:N*T*Crohm,bh1715C*");
MODULE_ALIAS("of:N*T*Crohm,bh1721");
MODULE_ALIAS("of:N*T*Crohm,bh1721C*");
MODULE_ALIAS("of:N*T*Crohm,bh1750");
MODULE_ALIAS("of:N*T*Crohm,bh1750C*");
MODULE_ALIAS("of:N*T*Crohm,bh1751");
MODULE_ALIAS("of:N*T*Crohm,bh1751C*");
MODULE_ALIAS("i2c:bh1710");
MODULE_ALIAS("i2c:bh1715");
MODULE_ALIAS("i2c:bh1721");
MODULE_ALIAS("i2c:bh1750");
MODULE_ALIAS("i2c:bh1751");

MODULE_INFO(srcversion, "4347724AB126BAB8B5CDAA1");
