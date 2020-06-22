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
	{ 0x579d15e3, "request_firmware" },
	{ 0x786cd351, "netdev_notice" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0xc5850110, "printk" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x3c534a6, "ptp_clock_register" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x725ad137, "eth_platform_get_mac_address" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa916b694, "strnlen" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0x207655d3, "pcie_capability_read_word" },
	{ 0xb01b9d62, "pci_find_capability" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x85a49dc7, "pci_vpd_find_info_keyword" },
	{ 0xf1361941, "pci_vpd_find_tag" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe23cc5d2, "pci_read_vpd" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x28102011, "build_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x93bd2599, "phy_set_asym_pause" },
	{ 0x5794bf4c, "phy_validate_pause" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xf08c67de, "napi_alloc_frag" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xce7eddce, "pcie_capability_write_word" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x768a0f22, "pci_device_is_present" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0xe0c00f84, "softnet_data" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xccc9e362, "ptp_clock_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x29733ddc, "phy_attached_info" },
	{ 0x3bcb20c9, "phy_support_asym_pause" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xc728c7c9, "phy_ethtool_ksettings_set" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x5cf2577a, "pcie_capability_clear_and_set_word" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x712e52f7, "current_task" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x754d539c, "strlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ecfdbda, "phy_ethtool_ksettings_get" },
	{ 0xf3225e40, "phy_stop" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x2441e215, "phy_start_aneg" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xf163231, "netdev_info" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xc1b14de8, "hwmon_device_register_with_groups" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x5792f848, "strlcpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf15da167, "ptp_clock_index" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xf5ff6263, "pci_wake_from_d3" },
	{ 0xc9938aa0, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x15af7f4, "system_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x4efebf0d, "mdiobus_get_phy" },
	{ 0xfb578fc5, "memset" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("pci:v000014E4d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001647sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000164Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001653sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001649sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001659sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016FEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000169Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv000017AAsd00003056bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000167Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001669sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000166Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000601bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv00001025sd00000612bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001665sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001657sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000165Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000173Bd000003EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00001645sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010CFd000011A2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "047F860B8FFE35FBD3735C8");
