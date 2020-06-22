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
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xbafee35, "i2c_dw_probe" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x519a034c, "set_primary_fwnode" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbead065b, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-designware-core,i2c-core");

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BC0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F02A73AD660C8B1A379DE9");
