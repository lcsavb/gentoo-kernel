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
	{ 0x6d1ee27e, "mt76x02_remove_interface" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0x9ff35e4d, "mt76x02_phy_set_txdac" },
	{ 0xfda3d1da, "mt76x2_phy_set_txpower" },
	{ 0xebd9bd40, "mt76x2_phy_set_txpower_regs" },
	{ 0x170436c, "mt76x2_read_rx_gain" },
	{ 0x863032cd, "__mt76_poll" },
	{ 0x7b1f827, "mt76x02_mac_wcid_setup" },
	{ 0x6f6b2200, "mt76_sw_scan" },
	{ 0x391e9757, "mt76x02_mcu_function_select" },
	{ 0x2a7a9326, "mt76x02_conf_tx" },
	{ 0xd276b85b, "mt76x02_mcu_calibrate" },
	{ 0x4667f800, "mt76x02_ampdu_action" },
	{ 0x2e51ed6e, "mt76u_stop_rx" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcf379e6f, "mt76x02_add_interface" },
	{ 0x1fff62b2, "mt76u_vendor_request" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x6d21b05e, "mt76x02u_init_beacon_config" },
	{ 0x2135c4dc, "mt76u_stop_tx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe24aace6, "mt76u_alloc_queues" },
	{ 0x88cebfcc, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd7e03ae1, "mt76x2_phy_update_channel_gain" },
	{ 0x73caae97, "mt76x02_init_agc_gain" },
	{ 0x48cba9c, "mt76x02_bss_info_changed" },
	{ 0x294dcfbe, "ieee80211_stop_queues" },
	{ 0xbc0754d5, "mt76x2_phy_tssi_compensate" },
	{ 0x448f4cb0, "mt76_sta_state" },
	{ 0xa4c915de, "mt76x2_mcu_init_gain" },
	{ 0x181fe734, "mt76x02u_tx_prepare_skb" },
	{ 0xa0ba1484, "mt76x02u_init_mcu" },
	{ 0x17475388, "_dev_warn" },
	{ 0xd444a266, "mt76x02_init_debugfs" },
	{ 0x112e5060, "mt76_get_survey" },
	{ 0xa72361a0, "mt76u_init" },
	{ 0x3728dd82, "mt76x02u_mcu_fw_send_data" },
	{ 0x594d5e25, "mt76x2_init_txpower" },
	{ 0xb0202c5, "mt76x2_mcu_load_cr" },
	{ 0x262bbadf, "mt76x02_sta_add" },
	{ 0xfd958b14, "mt76x02_tx_status_data" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x27a5e2fc, "mt76x02_edcca_init" },
	{ 0x694f03f1, "mt76x02_phy_set_rxpath" },
	{ 0xa658206b, "mt76x02_sta_remove" },
	{ 0xa930d541, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x3973c83b, "ieee80211_wake_queues" },
	{ 0x941bb2f7, "mt76x02_tx" },
	{ 0x65854273, "__mt76_poll_msec" },
	{ 0x5504f26f, "mt76x02_init_device" },
	{ 0x63019a6a, "mt76_set_channel" },
	{ 0xece1d18e, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4f041f53, "mt76x02_phy_set_bw" },
	{ 0xa00e91b7, "mt76x02_sw_scan_complete" },
	{ 0x50e02eaa, "mt76_set_tim" },
	{ 0xff0a348e, "mt76_register_device" },
	{ 0x4af5c5d9, "mt76x02_mac_setaddr" },
	{ 0x88c9fa09, "mt76x02u_mcu_fw_reset" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x278d36f2, "mt76u_queues_deinit" },
	{ 0xa4b07b27, "mt76x02_queue_rx_skb" },
	{ 0xda67f857, "mt76x02_configure_filter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x73a9f764, "mt76x2_configure_tx_delay" },
	{ 0x7fac48f0, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xa7c30b62, "mt76x2_mac_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x62ca0bdc, "mt76x02_ext_pa_enabled" },
	{ 0x44d295dc, "mt76x02_mac_shared_key_setup" },
	{ 0x5e831987, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x29829b98, "mt76x02_sta_rate_tbl_update" },
	{ 0x67ab8530, "mt76u_resume_rx" },
	{ 0x94fc618, "mt76x02_sta_ps" },
	{ 0xb48f0b00, "mt76x2_apply_gain_adj" },
	{ 0xcf67bf46, "mt76_wake_tx_queue" },
	{ 0x2b39ad43, "mt76x02_mcu_set_radio_state" },
	{ 0xdcf69904, "mt76x2_mcu_set_channel" },
	{ 0x674da777, "mt76x2_reset_wlan" },
	{ 0xda1c86c, "mt76_write_mac_initvals" },
	{ 0xc8b88e09, "mt76_get_txpower" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb400637e, "mt76_release_buffered_frames" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x7a2d6a65, "mt76x02_set_key" },
	{ 0xd56985c, "mt76x02_set_ethtool_fwver" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x4c450ae2, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76x2-common,mt76,mt76-usb,mac80211,mt76x02-usb");

MODULE_ALIAS("usb:v0B05p1833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p180Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep02E6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C6DB491E2EDFEAD8EE9C01C");
