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
	{ 0x42a508e0, "_dev_info" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x349cba85, "strchr" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000E:*");

MODULE_INFO(srcversion, "54A391B2419671B848EA16F");
