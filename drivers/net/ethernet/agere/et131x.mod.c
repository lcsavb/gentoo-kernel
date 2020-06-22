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
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x6d495207, "register_netdev" },
	{ 0x29733ddc, "phy_attached_info" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0xd80eb779, "phy_find_first" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x30cdd1b6, "pcie_set_readrq" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xd6f026d2, "pci_dev_get" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd07a6947, "phy_print_status" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xf3225e40, "phy_stop" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17475388, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xedc03953, "iounmap" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("pci:v000011C1d0000ED00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011C1d0000ED01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2F5754A53076B285936846E");
