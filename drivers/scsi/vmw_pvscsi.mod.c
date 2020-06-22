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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x87b8798d, "sg_next" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x29361773, "complete" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x17475388, "_dev_warn" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0xc66da23c, "scsi_host_get" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "79F43C710731C282FEF27EB");
