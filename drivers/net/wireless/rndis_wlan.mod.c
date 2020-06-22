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
	{ 0x3e38e6a2, "param_ops_string" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0x5acaf1c8, "rndis_tx_fixup" },
	{ 0xf415fd66, "rndis_rx_fixup" },
	{ 0xfe4f9cd3, "rndis_status" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x97b32b8d, "wiphy_register" },
	{ 0x633cada3, "generic_rndis_bind" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa70ae6c5, "wiphy_new_nm" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x76e70574, "usbnet_purge_paused_rxq" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x54b1ba53, "cfg80211_disconnected" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xf99bd01f, "cfg80211_ibss_joined" },
	{ 0x8e4fc03d, "cfg80211_roamed" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x34d8b884, "usbnet_resume_rx" },
	{ 0x7974412c, "cfg80211_cqm_rssi_notify" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaeedd606, "cfg80211_put_bss" },
	{ 0x59e104af, "ieee80211_get_channel" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7b9bcae3, "cfg80211_scan_done" },
	{ 0x631a8ac6, "wiphy_free" },
	{ 0xa36fd63d, "wiphy_unregister" },
	{ 0x6e35d3e8, "rndis_unbind" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfeb24215, "rndis_command" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x45cc952, "cfg80211_inform_bss_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebc0c847, "cfg80211_connect_done" },
	{ 0x6ee19e7a, "cfg80211_pmksa_candidate_notify" },
	{ 0xd71f451a, "cfg80211_michael_mic_failure" },
	{ 0xd31ea0f, "usbnet_pause_rx" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xf163231, "netdev_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,rndis_host,cfg80211");

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");

MODULE_INFO(srcversion, "AEC3E86F8E3A19A4D8F6728");
