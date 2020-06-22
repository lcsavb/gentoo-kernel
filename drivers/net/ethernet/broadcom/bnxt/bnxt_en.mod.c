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
	{ 0x6d840fec, "devlink_port_register" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb69e4479, "dcb_ieee_setapp" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xf3713935, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc1b14de8, "hwmon_device_register_with_groups" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x4673cce9, "devlink_port_params_register" },
	{ 0xec71776b, "dcb_ieee_delapp" },
	{ 0x82c7a1b, "__page_pool_put_page" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x754d539c, "strlen" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x962af193, "__skb_flow_dissect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x234cf416, "devlink_fmsg_string_pair_put" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0x64a4be57, "napi_hash_del" },
	{ 0xbf950230, "xdp_rxq_info_reg" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x5e6ccc76, "page_pool_unmap_page" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xcb09374d, "netdev_set_num_tc" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xa99b39c2, "prandom_bytes" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0x728f1bc8, "tcp_gro_complete" },
	{ 0xa928154a, "pci_disable_sriov" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x894e8a91, "page_pool_alloc_pages" },
	{ 0xb894ff90, "xdp_rxq_info_unreg" },
	{ 0xcdab8388, "flow_rule_match_vlan" },
	{ 0x8417c228, "pcie_print_link_status" },
	{ 0xdb5df687, "call_netdevice_notifiers" },
	{ 0xdcf4fb17, "bpf_prog_add" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4907b35c, "flow_rule_match_enc_ports" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x993dfb13, "devlink_alloc" },
	{ 0x850bb6db, "devlink_health_reporter_destroy" },
	{ 0x8ef7a916, "devlink_params_register" },
	{ 0x999e8297, "vfree" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x2ebfd35e, "netdev_reset_tc" },
	{ 0x4ba927f5, "rps_may_expire_flow" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x244f36c3, "xdp_return_frame_rx_napi" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcc7eb6dd, "netdev_set_tc_queue" },
	{ 0x4405545f, "flow_rule_match_ipv6_addrs" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3d9819fa, "flow_rule_match_ports" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0x4eb171bc, "page_pool_create" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x712e52f7, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xa26b093e, "devlink_params_publish" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xcd279169, "nla_find" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6d495207, "register_netdev" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0xdf5ad8d6, "pcie_flr" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9938aa0, "dev_close" },
	{ 0x601b849f, "netif_set_real_num_rx_queues" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xe0476761, "netif_set_real_num_tx_queues" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x66eb4335, "devlink_port_params_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xafb066eb, "xdp_return_frame" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6a683da4, "simple_open" },
	{ 0xe0c00f84, "softnet_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1567346e, "devlink_port_unregister" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0xc8a91f5b, "cpumask_local_spread" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x88b1b310, "pci_clear_master" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x28102011, "build_skb" },
	{ 0x2bfc8fe0, "flow_rule_match_basic" },
	{ 0x50b49039, "flow_block_cb_setup_simple" },
	{ 0x5a171677, "xdp_rxq_info_is_reg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x438af109, "eth_get_headlen" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb761a381, "napi_gro_receive" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x247ec5, "flow_rule_match_enc_ipv4_addrs" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0x7f52071a, "net_dim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xe40bb23e, "devlink_health_reporter_priv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x9ad388a2, "flow_rule_match_icmp" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xce8777dd, "xdp_rxq_info_reg_mem_model" },
	{ 0x627cd191, "netdev_port_same_parent_id" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x7a94442d, "flow_rule_match_ipv4_addrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0xd889e486, "devlink_free" },
	{ 0xcb53c9cf, "xdp_do_redirect" },
	{ 0x589a2cfb, "page_pool_destroy" },
	{ 0x3889342c, "devlink_register" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x93edef07, "devlink_health_report" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa86a1df4, "devlink_port_attrs_set" },
	{ 0x20e2c1a4, "skb_add_rx_frag" },
	{ 0x4c73ed20, "flow_rule_match_eth_addrs" },
	{ 0x658bdc24, "pci_num_vf" },
	{ 0xde054258, "devlink_params_unregister" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbd99e34f, "devlink_health_reporter_create" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x3380caa6, "ndo_dflt_bridge_getlink" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x73c2554f, "__iowrite64_copy" },
	{ 0x893abbdd, "devlink_fmsg_u32_pair_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7636367b, "pci_vfs_assigned" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xec668a41, "__napi_alloc_skb" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xf5ff6263, "pci_wake_from_d3" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x5fb72227, "devlink_unregister" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0x61f204df, "bpf_prog_put" },
	{ 0xca3f7f32, "pci_find_ext_capability" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xb9f850a, "flow_rule_match_enc_keyid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x9b93ff4a, "devlink_port_type_eth_set" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000014E4d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d000016E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00001807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000D800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3299A3A6D15820718BD5B46");
