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
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x69acdf38, "memcpy" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0xc5850110, "printk" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd0bfbde1, "scsi_host_busy" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xd517f601, "seq_puts" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xa916b694, "strnlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010CDd00001100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CDd00002700sv*sd*bc*sc*i*");
MODULE_ALIAS("eisa:sABP7401*");
MODULE_ALIAS("eisa:sABP7501*");

MODULE_INFO(srcversion, "A959299C15F7FD6417024C3");
