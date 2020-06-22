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
	{ 0x6a683da4, "simple_open" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xc5850110, "printk" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1d3412a, "ntb_register_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xcdeaf9cd, "pcim_iomap_regions_request_all" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x7aee7f3d, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xa7b883c4, "ntb_unregister_device" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x37a0cba, "kfree" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa61cd13, "pcibios_resource_to_bus" },
	{ 0x8e382a2d, "ntb_msg_event" },
	{ 0x1c662315, "ntb_db_event" },
	{ 0x250382fa, "ntb_link_event" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v0000111Dd00008091sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Fsv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008088sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008092sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd00008090sv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Esv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Csv*sd*bc06sc80i*");
MODULE_ALIAS("pci:v0000111Dd0000808Asv*sd*bc06sc80i*");

MODULE_INFO(srcversion, "E85DC9AF68EAB9ADCEFD735");
