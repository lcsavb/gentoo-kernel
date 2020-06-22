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
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x4cf8df0b, "usb_altnum_to_altsetting" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xe784458e, "usbnet_link_change" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0x78bcf576, "usbnet_update_max_qlen" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x2c07b1d8, "netif_schedule_queue" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5c2eb5e2, "usbnet_nway_reset" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x9cad97ff, "usbnet_set_link_ksettings" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb13d43cc, "usbnet_get_link_ksettings" },
	{ 0xf6a978cc, "usb_driver_claim_interface" },
	{ 0xf9d1570b, "usbnet_get_drvinfo" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xb4cb23d5, "usbnet_get_link" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc9a416b5, "usbnet_read_cmd" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ad8b8cf, "cdc_parse_cdc_header" },
	{ 0x3d556d38, "usbnet_get_ethernet_addr" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0x29eaeba6, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8eee7a73, "usbnet_unlink_rx_urbs" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x4018889f, "usbnet_manage_power" },
	{ 0x86638119, "usbnet_write_cmd" },
	{ 0x744f1eb, "usbnet_set_msglevel" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "8365F7A3EC7909B4B3ECFB3");
