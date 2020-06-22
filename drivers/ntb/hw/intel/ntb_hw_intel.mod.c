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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xa7b883c4, "ntb_unregister_device" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xe1d3412a, "ntb_register_device" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x3c457453, "ioread64_lo_hi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6a683da4, "simple_open" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27522eea, "pci_intx" },
	{ 0x848d372e, "iowrite8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd21c5139, "iowrite64_lo_hi" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x1c662315, "ntb_db_event" },
	{ 0x250382fa, "ntb_link_event" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x48d62551, "param_ops_ullong" },
};

MODULE_INFO(depends, "ntb");

MODULE_ALIAS("pci:v00008086d00003725sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003726sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F0Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000201Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8B1C714F8182AE603F53976");
