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
	{ 0x685b5bb1, "wl12xx_cmd_build_probe_req" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xf938bd65, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x82e076b0, "wlcore_event_beacon_loss" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xfffe86ba, "wlcore_event_dummy_packet" },
	{ 0xdc71d559, "wlcore_event_inactive_sta" },
	{ 0x865b6530, "wlcore_event_ba_rx_constraint" },
	{ 0x55d423ba, "ieee80211_radar_detected" },
	{ 0xf31cc421, "wlcore_event_fw_logger" },
	{ 0x18860b96, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x15fd3eff, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xb7c63fbf, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x24deee5b, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x88665667, "wl1271_cmd_configure" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf8fbfb8c, "default_llseek" },
	{ 0x6db5c15e, "wlcore_event_sched_scan_completed" },
	{ 0xa0dbb822, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0xbaafc316, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0x6e419c64, "wlcore_enable_interrupts" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x6a683da4, "simple_open" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x7f332b3a, "__cfg80211_send_event_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x507498ad, "wlcore_event_channel_switch" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5a33b91a, "__cfg80211_alloc_event_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ba4af6, "wlcore_disable_interrupts" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xbb494319, "wlcore_remove" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x2279e11f, "wlcore_event_max_tx_failure" },
	{ 0x4d4cab99, "wl1271_free_tx_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xbe52febd, "ieee80211_stop_rx_ba_session" },
	{ 0x8baf59f8, "wlcore_scan_sched_scan_results" },
	{ 0xdfd8dfc6, "ieee80211_get_hdrlen_from_skb" },
	{ 0x1796940b, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa927850d, "wl1271_debugfs_update_stats" },
	{ 0x2f536ff5, "wlcore_set_scan_chan_params" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb10b58e4, "wlcore_boot_run_firmware" },
	{ 0x63a2c138, "wlcore_translate_addr" },
	{ 0x6a69dd8f, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd06a2b67, "wlcore_event_roc_complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x21d7a95, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x2fb39267, "wl1271_cmd_send" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xea830adb, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "7B5CD649474EDF68FBB6590");
