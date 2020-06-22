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
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x6d495207, "register_netdev" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x6034484a, "pci_try_set_mwi" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x999e8297, "vfree" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x1000e51, "schedule" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x85a3113a, "netdev_printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x712e52f7, "current_task" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf163231, "netdev_info" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5792f848, "strlcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1a281859, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000100Bd00000035sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5D2F299D17E2E4B1AA8B77C");
