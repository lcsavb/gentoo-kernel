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
	{ 0x1a19fb3f, "ieee80211_rx_napi" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4e5b2b52, "ath9k_hw_set_txq_props" },
	{ 0xc94ef487, "ieee80211_csa_finish" },
	{ 0x42c48418, "ath9k_hw_init" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa9ea3bc, "ath9k_cmn_get_channel" },
	{ 0xd36350f0, "ath9k_hw_deinit" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0xcba69f7e, "ath9k_hw_set_gpio" },
	{ 0x43967a, "ath9k_cmn_init_crypto" },
	{ 0x1402737e, "ieee80211_queue_work" },
	{ 0x3d97a559, "ath9k_cmn_process_rate" },
	{ 0x8fcdfe84, "ieee80211_csa_is_complete" },
	{ 0x85d8761d, "ath9k_hw_btcoex_enable" },
	{ 0xe54458f6, "ath9k_hw_wait" },
	{ 0x5a16a7f6, "ath9k_cmn_get_hw_crypto_keytype" },
	{ 0xda11c83f, "ath9k_hw_stopdmarecv" },
	{ 0xe4b79570, "ath_key_delete" },
	{ 0xd22866bb, "ath9k_cmn_update_txpow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd6465143, "ieee80211_beacon_get_tim" },
	{ 0xd4eafeff, "ath9k_hw_gpio_get" },
	{ 0xdd7d7cf4, "ath_regd_init" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc85516c2, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xa6223da5, "ath9k_hw_setrxfilter" },
	{ 0xd167af45, "ath9k_hw_get_txq_props" },
	{ 0xeb959d0c, "ath9k_hw_releasetxqueue" },
	{ 0xda9b3c7e, "ath9k_hw_reset_tsf" },
	{ 0x3923683e, "wiphy_rfkill_start_polling" },
	{ 0x447a2d81, "ath9k_cmn_reload_chainmask" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc88c4c1c, "ath9k_cmn_init_channels_rates" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xfe9d769d, "ieee80211_tx_status" },
	{ 0x7d23ba95, "ath_printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd0ecf4af, "ath9k_hw_setopmode" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf49ed4c8, "ath9k_hw_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9cf2e3ae, "ath9k_hw_resettxqueue" },
	{ 0xb6d64c6f, "ath9k_hw_gettsf64" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1f1c301, "ath9k_hw_set_sta_beacon_timers" },
	{ 0x133bdc2c, "ath9k_hw_set_tsfadjust" },
	{ 0x55ddf0b7, "ath9k_cmn_beacon_config_ap" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdf869514, "ath9k_hw_btcoex_disable" },
	{ 0x114887a1, "ath9k_hw_getrxfilter" },
	{ 0x972b35fb, "ath9k_hw_ani_monitor" },
	{ 0x67d92765, "ath_is_mybeacon" },
	{ 0xe542658e, "ath9k_cmn_beacon_config_adhoc" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xd519e2d, "ath9k_cmn_process_rssi" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x1249e4ab, "wiphy_rfkill_stop_polling" },
	{ 0x93a92670, "request_firmware_nowait" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9b602a16, "ath9k_hw_write_associd" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7088270c, "ath_reg_notifier_apply" },
	{ 0x2b77a14, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x74d466d0, "ath9k_hw_init_btcoex_hw" },
	{ 0x63a33536, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x5a402e00, "ath9k_hw_beaconq_setup" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xdfb4a264, "ath9k_hw_name" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9b0765b9, "ath9k_hw_init_global_settings" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x69500651, "ath9k_hw_settsf64" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x458ecb7, "wiphy_rfkill_set_hw_state" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6c4ae650, "ath9k_hw_beaconinit" },
	{ 0x6e17003, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9ea6fb8c, "ieee80211_get_buffered_bc" },
	{ 0x738d1307, "usb_interrupt_msg" },
	{ 0x8ae300e6, "ath9k_hw_gpio_free" },
	{ 0xb7daf6d2, "ath9k_hw_btcoex_bt_stomp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x90e21373, "ath9k_hw_setrxabort" },
	{ 0x3d4dbbc5, "ath9k_cmn_beacon_config_sta" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xac3fecca, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa79b5330, "ath9k_cmn_rx_skb_postprocess" },
	{ 0x6f6334c8, "ath9k_hw_phy_disable" },
	{ 0x34cb9cd8, "__ieee80211_get_radio_led_name" },
	{ 0xdfd8dfc6, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd87574b3, "ath9k_hw_setpower" },
	{ 0x3061f450, "__ieee80211_create_tpt_led_trigger" },
	{ 0x9b3e27d6, "ieee80211_register_hw" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x704d2135, "ath9k_hw_btcoex_set_weight" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3b6f9c9, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x448b0f73, "ath9k_hw_setmcastfilter" },
	{ 0xf918003a, "ieee80211_start_tx_ba_session" },
	{ 0x5c9fed37, "ath9k_hw_gpio_request_out" },
	{ 0xe364837d, "ath9k_hw_startpcureceive" },
	{ 0x4ca8edee, "ath9k_hw_setuptxqueue" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xaefff7d6, "ath9k_hw_reset" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xff342cbe, "ath9k_cmn_rx_accept" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xab582f91, "ath9k_hw_btcoex_init_3wire" },
	{ 0x5e9d4252, "ath_key_config" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x5f508b2e, "ath9k_hw_reset_calvalid" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x545a6758, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,ath9k_hw,ath9k_common,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4EBF127282A8AA143464B6B");
