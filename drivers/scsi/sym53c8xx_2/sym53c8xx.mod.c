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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x1f89f041, "spi_dv_device" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc5bf69e0, "spi_attach_transport" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x17475388, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6dd96a89, "pci_set_mwi" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2f67abea, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xf009edf8, "spi_display_xfer_agreement" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xa61cd13, "pcibios_resource_to_bus" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xc5534d64, "ioread16" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34ECC6A10CAF87113201DAA");
