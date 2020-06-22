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
	{ 0x60a4c06b, "wmi_driver_unregister" },
	{ 0xb43ec756, "__wmi_driver_register" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");

MODULE_ALIAS("wmi:86CCFD48-205E-4A77-9C48-2021CBEDE341");

MODULE_INFO(srcversion, "41AAFA0862F8432DA59E19E");
