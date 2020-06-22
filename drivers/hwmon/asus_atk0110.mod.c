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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc5850110, "printk" },
	{ 0xf4b754fd, "acpi_resources_are_enforced" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8259f845, "debugfs_create_file_unsafe" },
	{ 0xfd17c3ef, "debugfs_create_x32" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xc1b14de8, "hwmon_device_register_with_groups" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x17475388, "_dev_warn" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa886fd0, "devm_kstrdup" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ATK0110:*");

MODULE_INFO(srcversion, "1CD208372FDA54408BCDDD4");
