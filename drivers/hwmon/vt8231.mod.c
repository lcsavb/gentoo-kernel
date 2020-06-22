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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x17475388, "_dev_warn" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xc5850110, "printk" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x22ebd899, "platform_device_add_resources" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6d870245, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00008235sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8C7EAE6F52163B8ADCC23DF");
