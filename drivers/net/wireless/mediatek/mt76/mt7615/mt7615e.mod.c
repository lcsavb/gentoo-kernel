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
	{ 0xc94ef487, "ieee80211_csa_finish" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x9b0f7400, "mt76_get_min_avg_rssi" },
	{ 0xf1769c50, "mt76_dma_attach" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x79c6daf3, "debugfs_create_u8" },
	{ 0xb2f1f765, "mt76_rx_aggr_stop" },
	{ 0x863032cd, "__mt76_poll" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x6f6b2200, "mt76_sw_scan" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x55d423ba, "ieee80211_radar_detected" },
	{ 0xc05ca5a3, "mt76_put_txwi" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x80716f0c, "mt76_rx_aggr_start" },
	{ 0x5b3eb846, "mt76_sw_scan_complete" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x88cebfcc, "mt76_txq_schedule_all" },
	{ 0x84816258, "mt76_insert_ccmp_hdr" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc85516c2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xdddef2fc, "mt76_txq_init" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0xbcec5020, "mt76_mcu_get_response" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0xed49762c, "mt76_tx_complete_skb" },
	{ 0x448f4cb0, "mt76_sta_state" },
	{ 0x4240cb3b, "debugfs_create_u32" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x112e5060, "mt76_get_survey" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xbe28447e, "mt76_set_irq_mask" },
	{ 0x29460ad7, "mt76_unregister_device" },
	{ 0x62908553, "mt76_eeprom_override" },
	{ 0x6ce7a5ee, "ieee80211_beacon_get_template" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0xa4c38871, "mt76_mmio_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x65854273, "__mt76_poll_msec" },
	{ 0x63019a6a, "mt76_set_channel" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xff0a348e, "mt76_register_device" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x34a2c43, "mt76_eeprom_init" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x776118d, "mt76_tx_status_skb_done" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0x2b77a14, "wiphy_to_ieee80211_hw" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xdc2c656d, "mt76_rx" },
	{ 0x63a33536, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x562d876a, "mt76_free_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x24f02558, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0x5d85b21f, "mt76_tx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd6a9a169, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf6ce88f, "mt76_register_debugfs" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd2c83532, "mt76_tx_status_check" },
	{ 0x5e831987, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1d5fcca3, "mt76_dma_cleanup" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x97ca495d, "mt76_mcu_rx_event" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xdfd8dfc6, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3a4444f, "ieee80211_tx_status_ext" },
	{ 0xcf67bf46, "mt76_wake_tx_queue" },
	{ 0xb0970f22, "mt76_get_rate" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x13e7e46d, "mt76_tx_status_skb_add" },
	{ 0xc8b88e09, "mt76_get_txpower" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb400637e, "mt76_release_buffered_frames" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xfd6a73ea, "debugfs_create_u16" },
	{ 0x787889d9, "mt76_tx_status_lock" },
	{ 0x21d1346, "mt76_mcu_msg_alloc" },
	{ 0xbc53a2df, "mt76_tx_status_skb_get" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xb8e79452, "mt76_txq_remove" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xde1b160a, "mt76_tx_status_unlock" },
	{ 0x545a6758, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xad8dd927, "dma_ops" },
};

MODULE_INFO(depends, "mac80211,mt76,cfg80211");

MODULE_ALIAS("pci:v000014C3d00007615sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F9DDB6FBB73A9454760B8A4");
