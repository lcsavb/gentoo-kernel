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
	{ 0x81f72deb, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xf938bd65, "wlcore_set_key" },
	{ 0x7d1e2969, "wl1271_acx_init_mem_config" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x82e076b0, "wlcore_event_beacon_loss" },
	{ 0xfffe86ba, "wlcore_event_dummy_packet" },
	{ 0xdc71d559, "wlcore_event_inactive_sta" },
	{ 0x865b6530, "wlcore_event_ba_rx_constraint" },
	{ 0x5d8218d3, "wl1271_acx_pm_config" },
	{ 0x37de7a96, "wlcore_calc_packet_alignment" },
	{ 0x18860b96, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x15fd3eff, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0xb7c63fbf, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x24deee5b, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x7ccbd79, "wl1271_acx_set_ht_capabilities" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88665667, "wl1271_cmd_configure" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xc9d0397b, "wl1271_cmd_data_path" },
	{ 0x56ad30f6, "wl12xx_acx_mem_cfg" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6db5c15e, "wlcore_event_sched_scan_completed" },
	{ 0xa0dbb822, "wlcore_boot_upload_firmware" },
	{ 0xf3fc1bd7, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0xbaafc316, "wlcore_set_partition" },
	{ 0x6e419c64, "wlcore_enable_interrupts" },
	{ 0xcfd2a1ae, "wl1271_cmd_test" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a683da4, "simple_open" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x507498ad, "wlcore_event_channel_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ba4af6, "wlcore_disable_interrupts" },
	{ 0xbb494319, "wlcore_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2279e11f, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x8baf59f8, "wlcore_scan_sched_scan_results" },
	{ 0x9167d5fc, "wlcore_event_soft_gemini_sense" },
	{ 0x1796940b, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aee7f96, "wlcore_tx_complete" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa927850d, "wl1271_debugfs_update_stats" },
	{ 0x2f536ff5, "wlcore_set_scan_chan_params" },
	{ 0xb10b58e4, "wlcore_boot_run_firmware" },
	{ 0x63a2c138, "wlcore_translate_addr" },
	{ 0x6a69dd8f, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xd06a2b67, "wlcore_event_roc_complete" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x2fb39267, "wl1271_cmd_send" },
	{ 0xa9572dcc, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "385BDE2D44631A152E7A66B");
