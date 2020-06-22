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
	{ 0xa3a4b89e, "iscsi_boot_create_acpitbl" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x8b360d50, "pci_get_domain_bus_and_slot" },
	{ 0x8f5c812c, "iscsi_boot_create_target" },
	{ 0x1a1800b6, "iscsi_boot_create_ethernet" },
	{ 0x97e3eab1, "iscsi_boot_create_initiator" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb76542d8, "iscsi_boot_create_kset" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xceed8318, "ibft_addr" },
	{ 0x4f66d5af, "iscsi_boot_destroy_kset" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_boot_sysfs");


MODULE_INFO(srcversion, "92621EDE464B9E4D7C689ED");
