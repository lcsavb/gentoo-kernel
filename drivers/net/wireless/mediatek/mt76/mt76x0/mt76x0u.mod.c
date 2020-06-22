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
	{ 0x863032cd, "__mt76_poll" },
	{ 0x6f6b2200, "mt76_sw_scan" },
	{ 0x2a7a9326, "mt76x02_conf_tx" },
	{ 0x4667f800, "mt76x02_ampdu_action" },
	{ 0x2e51ed6e, "mt76u_stop_rx" },
	{ 0xfcc44d8, "mt76x02u_exit_beacon_config" },
	{ 0xcf379e6f, "mt76x02_add_interface" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1fff62b2, "mt76u_vendor_request" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x6d21b05e, "mt76x02u_init_beacon_config" },
	{ 0x2135c4dc, "mt76u_stop_tx" },
	{ 0xe24aace6, "mt76u_alloc_queues" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x84958be9, "mt76x0_mac_start" },
	{ 0x48cba9c, "mt76x02_bss_info_changed" },
	{ 0x3189446e, "mt76x0_init_hardware" },
	{ 0x448f4cb0, "mt76_sta_state" },
	{ 0x87f47071, "mt76x02_set_rts_threshold" },
	{ 0x181fe734, "mt76x02u_tx_prepare_skb" },
	{ 0xa0ba1484, "mt76x02u_init_mcu" },
	{ 0x17475388, "_dev_warn" },
	{ 0x112e5060, "mt76_get_survey" },
	{ 0xa72361a0, "mt76u_init" },
	{ 0x3728dd82, "mt76x02u_mcu_fw_send_data" },
	{ 0x3d79100d, "mt76x0_mac_stop" },
	{ 0x262bbadf, "mt76x02_sta_add" },
	{ 0xfd958b14, "mt76x02_tx_status_data" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa658206b, "mt76x02_sta_remove" },
	{ 0x941bb2f7, "mt76x02_tx" },
	{ 0x65854273, "__mt76_poll_msec" },
	{ 0xa00e91b7, "mt76x02_sw_scan_complete" },
	{ 0x50e02eaa, "mt76_set_tim" },
	{ 0x3d43dcce, "mt76x0_phy_calibrate" },
	{ 0x88c9fa09, "mt76x02u_mcu_fw_reset" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd2caa1e1, "mt76x0_register_device" },
	{ 0xf5179e52, "mt76x0_config" },
	{ 0xf0daa596, "ieee80211_queue_delayed_work" },
	{ 0x278d36f2, "mt76u_queues_deinit" },
	{ 0xa4b07b27, "mt76x02_queue_rx_skb" },
	{ 0xff6d3a1b, "mt76x0_chip_onoff" },
	{ 0xda67f857, "mt76x02_configure_filter" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7fac48f0, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5e831987, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x29829b98, "mt76x02_sta_rate_tbl_update" },
	{ 0x67ab8530, "mt76u_resume_rx" },
	{ 0x94fc618, "mt76x02_sta_ps" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf67bf46, "mt76_wake_tx_queue" },
	{ 0xc8b88e09, "mt76_get_txpower" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb400637e, "mt76_release_buffered_frames" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x7a2d6a65, "mt76x02_set_key" },
	{ 0x73cd3bb6, "firmware_request_nowarn" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x4c450ae2, "mt76x02u_tx_complete_skb" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76-usb,mt76x02-usb,mac80211,mt76x0-common");

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "13DBD37545D52ED76C7B512");
