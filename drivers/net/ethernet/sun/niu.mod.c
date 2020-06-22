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
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x83fd15b4, "netif_tx_stop_all_queues" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x55e77e8, "jiffies_64" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x5cf2577a, "pcie_capability_clear_and_set_word" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xf163231, "netdev_info" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x85a3113a, "netdev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000108Ed0000ABCDsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E326AECBBC9DB7030940AC4");
