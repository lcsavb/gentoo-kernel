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
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x87b8798d, "sg_next" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x3cb83d5b, "eeprom_93cx6_multireadb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x69acdf38, "memcpy" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x17475388, "_dev_warn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "eeprom_93cx6");

MODULE_ALIAS("pci:v0000101Cd00003296sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EC8C85070556A161AFC48AE");
