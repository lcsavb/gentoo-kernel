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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0x1a281859, "pv_ops" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa8aa0773, "scsicam_bios_param" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd517f601, "seq_puts" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001DE1d00000391sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DAD1CEB42D6C6D73E7E403C");
