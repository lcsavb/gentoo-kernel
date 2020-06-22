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
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf9a482f9, "msleep" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc501cc3c, "i2c_smbus_read_byte" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x96848186, "scnprintf" },
	{ 0x76d60d47, "i2c_smbus_write_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:blinkm");

MODULE_INFO(srcversion, "DF856334DF4A24A75EF6364");
