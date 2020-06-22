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
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf163231, "netdev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x786cd351, "netdev_notice" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x83fd15b4, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xc9938aa0, "dev_close" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x453c8403, "pci_msi_enabled" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xdbe9fd07, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xdd9c4a32, "pci_release_selected_regions" },
	{ 0x4d73f906, "pci_request_selected_regions" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe48af658, "__put_page" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015ADd000007B0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "55A39C0C5AF1441E3999E5D");
