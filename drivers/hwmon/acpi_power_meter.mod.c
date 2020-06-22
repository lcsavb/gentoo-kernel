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
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xbe921e36, "sysfs_notify" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x9166fada, "strncpy" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0xd94181ab, "get_device" },
	{ 0x38ffba81, "acpi_bus_get_device" },
	{ 0x49a686c3, "kobject_create_and_add" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x17475388, "_dev_warn" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe45fa038, "kobject_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x94bd2068, "put_device" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI000D:*");

MODULE_INFO(srcversion, "31F48AE2428C5451FD3013D");
