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
	{ 0x42a508e0, "_dev_info" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,hwmon-vid");

MODULE_ALIAS("of:N*T*Cadi,adt7473");
MODULE_ALIAS("of:N*T*Cadi,adt7473C*");
MODULE_ALIAS("of:N*T*Cadi,adt7475");
MODULE_ALIAS("of:N*T*Cadi,adt7475C*");
MODULE_ALIAS("of:N*T*Cadi,adt7476");
MODULE_ALIAS("of:N*T*Cadi,adt7476C*");
MODULE_ALIAS("of:N*T*Cadi,adt7490");
MODULE_ALIAS("of:N*T*Cadi,adt7490C*");
MODULE_ALIAS("i2c:adt7473");
MODULE_ALIAS("i2c:adt7475");
MODULE_ALIAS("i2c:adt7476");
MODULE_ALIAS("i2c:adt7490");

MODULE_INFO(srcversion, "F6DAA0103E371C2299C5AD1");
