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
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x1a281859, "pv_ops" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x6d495207, "register_netdev" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x754d539c, "strlen" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0x85bd1608, "__request_region" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "734081B4DA7AE829EFC0DFC");
