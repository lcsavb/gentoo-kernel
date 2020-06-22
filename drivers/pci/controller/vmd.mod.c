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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0xf916dbbb, "pci_bus_add_devices" },
	{ 0x3cd5703f, "pcie_bus_configure_settings" },
	{ 0x6f31a51a, "pci_assign_unassigned_bus_resources" },
	{ 0x83185473, "pci_scan_child_bus" },
	{ 0xa717e2cc, "add_dma_domain" },
	{ 0x8a4eb920, "pci_create_root_bus" },
	{ 0x218e600b, "pci_add_resource_offset" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0xc99e4afb, "irq_domain_free_fwnode" },
	{ 0xbec923fc, "pci_msi_create_irq_domain" },
	{ 0x3f697c8, "x86_vector_domain" },
	{ 0x14726d71, "__irq_domain_alloc_fwnode" },
	{ 0x7f8036ab, "pci_find_next_bus" },
	{ 0xfefb0254, "init_srcu_struct" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x2233ddeb, "pci_msix_vec_count" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb1b99f12, "irq_domain_set_info" },
	{ 0xc93578c, "handle_untracked_irq" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa916f73e, "msi_desc_to_pci_dev" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xf2a5f621, "dma_mmap_attrs" },
	{ 0x131a7f40, "dma_get_sgtable_attrs" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0xa43aa958, "dma_direct_sync_sg_for_cpu" },
	{ 0xcf060b65, "dma_direct_sync_sg_for_device" },
	{ 0x39b81ee0, "dma_supported" },
	{ 0x980d5910, "dma_get_required_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0xbc274f93, "synchronize_srcu" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x65b03470, "irq_domain_remove" },
	{ 0x9d195f11, "del_dma_domain" },
	{ 0xf4ee41ba, "cleanup_srcu_struct" },
	{ 0x47ffb56a, "pci_remove_root_bus" },
	{ 0x6adc3ce1, "pci_stop_root_bus" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0xa921b9d5, "__srcu_read_unlock" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xfd81c234, "__srcu_read_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "93A47E460951F83D2C4B454");
