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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdb92e1cb, "dfl_fpga_feature_devs_enumerate" },
	{ 0x31513e8b, "dfl_fpga_enum_info_add_dfl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x398602ee, "dfl_fpga_enum_info_free" },
	{ 0x4af3d8c5, "dfl_fpga_enum_info_alloc" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0x2fdf8861, "dfl_fpga_feature_devs_remove" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0xf3713935, "pci_enable_sriov" },
	{ 0xde47808, "dfl_fpga_cdev_config_ports_vf" },
	{ 0x37c62b23, "dfl_fpga_cdev_config_ports_pf" },
	{ 0xa928154a, "pci_disable_sriov" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl");

MODULE_ALIAS("pci:v00008086d0000BCBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "089623AF9669C278AC68115");
