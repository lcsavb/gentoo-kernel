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
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:powr1220");

MODULE_INFO(srcversion, "2050163F5BB4C7E0FF69D97");
