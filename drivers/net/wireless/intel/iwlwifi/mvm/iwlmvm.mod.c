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
	{ 0xeb3b0dbc, "iwl_phy_db_init" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x4602ca09, "thermal_notify_framework" },
	{ 0x1a19fb3f, "ieee80211_rx_napi" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc94ef487, "ieee80211_csa_finish" },
	{ 0xd32e592b, "__iwl_err" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc0c2fe7, "iwl_parse_nvm_data" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x275269b3, "ieee80211_ie_split_ric" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xf1829eb7, "iwl_acpi_get_pwr_limit" },
	{ 0x79c6daf3, "debugfs_create_u8" },
	{ 0xf88964e4, "iwl_remove_notification" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x7844ae74, "ieee80211_iterate_active_interfaces_rtnl" },
	{ 0xa6a6e38b, "regulatory_set_wiphy_regd" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xb9e96543, "ieee80211_sta_ps_transition" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x2571fb3d, "iwl_acpi_get_eckv" },
	{ 0xc34dafe2, "iwl_fw_runtime_resume" },
	{ 0x81188c30, "match_string" },
	{ 0xf9acd33, "iwl_fw_start_dbg_conf" },
	{ 0x8fcdfe84, "ieee80211_csa_is_complete" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7eb18223, "iwl_cmd_groups_verify_sorted" },
	{ 0x2710c362, "iwl_dump_desc_assert" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x926be065, "thermal_cooling_device_unregister" },
	{ 0x52f5a033, "ieee80211_request_smps" },
	{ 0xe37544d1, "iwl_force_nmi" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd899f446, "iwl_finish_nic_init" },
	{ 0xce5dc929, "iwl_fw_dbg_stop_sync" },
	{ 0x6b0d5ce1, "iwl_fw_dbg_read_d3_debug_data" },
	{ 0xd8d14fb, "ieee80211_cqm_rssi_notify" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb5fba4cc, "ieee80211_tdls_oper_request" },
	{ 0xcaac5422, "cfg80211_chandef_create" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xce0c6460, "iwl_phy_db_set_section" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe133e411, "iwl_set_bits_mask_prph" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2124474, "ip_send_check" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2935ad04, "iwl_opmode_register" },
	{ 0x7d3a792b, "ieee80211_csa_update_counter" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa80427ae, "ieee80211_resume_disconnect" },
	{ 0xc025ce41, "iwl_dbg_tlv_time_point" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x1d81afc9, "ieee80211_tkip_add_iv" },
	{ 0x93878691, "ieee80211_get_vht_max_nss" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc85516c2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x83a17f2f, "ieee80211_scan_completed" },
	{ 0x950a13e0, "ieee80211_sched_scan_results" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x9c85b19f, "iwl_fw_dbg_stop_restart_recording" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xf82546d9, "ieee80211_mark_rx_ba_filtered_frames" },
	{ 0xf6ffee05, "ieee80211_vif_to_wdev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbafc8994, "iwl_wait_notification" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xece2e429, "iwl_fw_error_print_fseq_regs" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6d0d73fd, "ieee80211_get_tkip_rx_p1k" },
	{ 0x5540b08f, "iwl_trans_send_cmd" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0xf24b74cf, "ieee80211_send_eosp_nullfunc" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5cffd840, "ieee80211_ready_on_channel" },
	{ 0x5536df82, "iwl_read_prph" },
	{ 0xfe9d769d, "ieee80211_tx_status" },
	{ 0x87a5a243, "iwl_get_shared_mem_conf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4240cb3b, "debugfs_create_u32" },
	{ 0xcfb30b94, "__iwl_dbg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x116d1e40, "ieee80211_tx_dequeue" },
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe0eb5838, "iwl_init_notification_wait" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15e7422d, "iwl_free_fw_paging" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa7c03748, "ieee80211_free_txskb" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xbcfee34a, "ieee80211_data_to_8023_exthdr" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa793d18b, "iwl_parse_nvm_mcc_info" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0x47dd9ea6, "ieee80211_rate_control_register" },
	{ 0x6ce7a5ee, "ieee80211_beacon_get_template" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0x8e0377f0, "ieee80211_sta_pspoll" },
	{ 0x734ecbd7, "thermal_zone_device_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6d91e33f, "iwl_write32" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x3dbe4efc, "ieee80211_csa_set_counter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9115166f, "iwl_write_prph" },
	{ 0xd4679db3, "ieee80211_remain_on_channel_expired" },
	{ 0x652032cb, "mac_pton" },
	{ 0xea1b26fc, "iwl_nvm_fixups" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb73f50f5, "ieee80211_sta_block_awake" },
	{ 0x3e773a12, "ieee80211_find_sta_by_ifaddr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0x20cdef8b, "ieee80211_reserve_tid" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x22013c9c, "iwl_fw_dbg_collect" },
	{ 0x6a683da4, "simple_open" },
	{ 0xfa3ff314, "debugfs_create_bool" },
	{ 0xe3a53f4c, "sort" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5bf51fe5, "regulatory_set_wiphy_regd_sync_rtnl" },
	{ 0xd592415c, "ieee80211_gtk_rekey_add" },
	{ 0x4ea5d10, "ksize" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x2df5fe58, "ieee80211_rx_ba_timer_expired" },
	{ 0x2b77a14, "wiphy_to_ieee80211_hw" },
	{ 0x92522165, "iwl_acpi_get_object" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x5316cb29, "ieee80211_remove_key" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x63a33536, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x681e3cee, "module_put" },
	{ 0x8f1f89ed, "cfg80211_pmsr_complete" },
	{ 0x688ced18, "iwl_read_external_nvm" },
	{ 0xb326e716, "iwlwifi_mod_params" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xfee8b819, "iwl_fw_dbg_error_collect" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x7ef775a3, "ieee80211_set_key_rx_seq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5a9de35c, "__iwl_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x458ecb7, "wiphy_rfkill_set_hw_state" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x562fc89e, "ieee80211_sta_uapsd_trigger" },
	{ 0x1bf04d8f, "ieee80211_sta_set_buffered" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x9d3e00a7, "device_reprobe" },
	{ 0xe345725f, "ieee80211_get_key_rx_seq" },
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xdac5c731, "ieee80211_iter_keys" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa2ccac63, "cfg80211_pmsr_report" },
	{ 0xaccc7c6e, "__iwl_warn" },
	{ 0x4a677f3e, "iwl_init_paging" },
	{ 0x50cf7585, "hex2bin" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x35033c81, "iwl_phy_db_free" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbe3a281b, "iwl_get_nvm" },
	{ 0x1332e4de, "iwl_abort_notification_waits" },
	{ 0xbe52febd, "ieee80211_stop_rx_ba_session" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5c52e109, "iwl_opmode_deregister" },
	{ 0x34cb9cd8, "__ieee80211_get_radio_led_name" },
	{ 0xa786e46a, "ieee80211_rate_control_unregister" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x737c80a0, "ieee80211_sta_eosp" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4f92d4ec, "ieee80211_restart_hw" },
	{ 0x9b3e27d6, "ieee80211_register_hw" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xb9521ad4, "thermal_cooling_device_register" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xd800f8a4, "iwl_fw_dbg_collect_desc" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xa724d59e, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf918003a, "ieee80211_start_tx_ba_session" },
	{ 0x1e51994a, "iwl_fw_dbg_collect_trig" },
	{ 0xf1ac42ad, "iwl_fw_runtime_init" },
	{ 0x2381aa39, "debugfs_create_blob" },
	{ 0x20e2c1a4, "skb_add_rx_frag" },
	{ 0x3770a790, "ieee80211_iterate_stations_atomic" },
	{ 0xc25a30f5, "ieee80211_get_tkip_p2k" },
	{ 0x96848186, "scnprintf" },
	{ 0x89f5af0e, "iwl_fw_runtime_suspend" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe75b7e77, "iwl_notification_wait" },
	{ 0x893e733b, "iwl_acpi_get_wifi_pkg" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2cfdf9d, "iwl_acpi_get_mcc" },
	{ 0xee8fcad, "debugfs_create_symlink" },
	{ 0x471bc39, "ieee80211_update_mu_groups" },
	{ 0x776221bf, "iwl_send_phy_db_data" },
	{ 0xad1f8ba6, "iwl_dbg_tlv_del_timers" },
	{ 0xd0c5f660, "_iwl_fw_dbg_ini_collect" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xe12074, "ieee80211_unreserve_tid" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5988395c, "iwl_notification_wait_init" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x888d86eb, "cfg80211_bss_iter" },
	{ 0xe4169b15, "ieee80211_chswitch_done" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7034e9e2, "ieee80211_sched_scan_stopped" },
	{ 0x8c440821, "ieee80211_iterate_interfaces" },
	{ 0x3b8e6b02, "ieee80211_report_wowlan_wakeup" },
	{ 0xea830adb, "ieee80211_connection_loss" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x545a6758, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x4b668bbe, "ieee80211_get_tkip_p1k_iv" },
	{ 0x6d771be, "device_set_wakeup_enable" },
	{ 0xc3f23363, "ieee80211_gtk_rekey_notify" },
	{ 0x2e7233d2, "ieee80211_stop_tx_ba_session" },
	{ 0x68afda08, "thermal_zone_device_unregister" },
};

MODULE_INFO(depends, "iwlwifi,mac80211,cfg80211");


MODULE_INFO(srcversion, "72177AE1F4A0517C1B02A3D");
