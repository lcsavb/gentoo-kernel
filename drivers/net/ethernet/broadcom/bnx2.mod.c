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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x28102011, "build_skb" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x754d539c, "strlen" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb01b9d62, "pci_find_capability" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xf5ff6263, "pci_wake_from_d3" },
	{ 0xc9938aa0, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xfb578fc5, "memset" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0xe914e41e, "strcpy" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf163231, "netdev_info" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003101bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv0000103Csd00003106bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv0000103Csd00003102bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001639sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000163Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F79E78CE041E94667B0F617");
