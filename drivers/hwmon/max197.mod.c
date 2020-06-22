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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max197");
MODULE_ALIAS("platform:max199");

MODULE_INFO(srcversion, "39DE266FC2C967FBF528EB1");
