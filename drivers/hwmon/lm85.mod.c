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
	{ 0x17475388, "_dev_warn" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,hwmon-vid");

MODULE_ALIAS("of:N*T*Cadi,adm1027");
MODULE_ALIAS("of:N*T*Cadi,adm1027C*");
MODULE_ALIAS("of:N*T*Cadi,adt7463");
MODULE_ALIAS("of:N*T*Cadi,adt7463C*");
MODULE_ALIAS("of:N*T*Cadi,adt7468");
MODULE_ALIAS("of:N*T*Cadi,adt7468C*");
MODULE_ALIAS("of:N*T*Cnational,lm85");
MODULE_ALIAS("of:N*T*Cnational,lm85C*");
MODULE_ALIAS("of:N*T*Cnational,lm85b");
MODULE_ALIAS("of:N*T*Cnational,lm85bC*");
MODULE_ALIAS("of:N*T*Cnational,lm85c");
MODULE_ALIAS("of:N*T*Cnational,lm85cC*");
MODULE_ALIAS("of:N*T*Cti,lm96000");
MODULE_ALIAS("of:N*T*Cti,lm96000C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d100");
MODULE_ALIAS("of:N*T*Csmsc,emc6d100C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d101");
MODULE_ALIAS("of:N*T*Csmsc,emc6d101C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d102");
MODULE_ALIAS("of:N*T*Csmsc,emc6d102C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103s");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103sC*");
MODULE_ALIAS("i2c:adm1027");
MODULE_ALIAS("i2c:adt7463");
MODULE_ALIAS("i2c:adt7468");
MODULE_ALIAS("i2c:lm85");
MODULE_ALIAS("i2c:lm85b");
MODULE_ALIAS("i2c:lm85c");
MODULE_ALIAS("i2c:lm96000");
MODULE_ALIAS("i2c:emc6d100");
MODULE_ALIAS("i2c:emc6d101");
MODULE_ALIAS("i2c:emc6d102");
MODULE_ALIAS("i2c:emc6d103");
MODULE_ALIAS("i2c:emc6d103s");

MODULE_INFO(srcversion, "88D97BA97D197DCE584DE6E");
