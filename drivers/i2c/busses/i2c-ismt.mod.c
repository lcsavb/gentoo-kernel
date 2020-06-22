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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17475388, "_dev_warn" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x519a034c, "set_primary_fwnode" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("pci:v00008086d00000C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F15sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "433297248DDDCC08D9F1203");
