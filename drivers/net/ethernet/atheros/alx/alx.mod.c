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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x30cdd1b6, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x87d39170, "pcie_get_readrq" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0xdbe9fd07, "pci_enable_device_mem" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xdd9c4a32, "pci_release_selected_regions" },
	{ 0x4d73f906, "pci_request_selected_regions" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mdio");

MODULE_ALIAS("pci:v00001969d00001091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d0000E0B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d00001090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001969d000010A0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ADE03D6E80128A9DC112A4F");
