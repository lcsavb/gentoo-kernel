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
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0x9863c46e, "cdc_ncm_change_mtu" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x1b895e6d, "usb_match_id" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x5e00d867, "usb_cdc_wdm_register" },
	{ 0x15dbcb0d, "cdc_ncm_bind_common" },
	{ 0xb606383b, "cdc_ncm_select_altsetting" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0x975c2256, "cdc_ncm_unbind" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x24923e6b, "__vlan_find_dev_deep_rcu" },
	{ 0x29fda823, "in6_dev_finish_destroy" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x652a5f26, "ipv6_stub" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xbab64c3e, "cdc_ncm_rx_verify_ndp16" },
	{ 0x1d8b7219, "cdc_ncm_rx_verify_nth16" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1fc92d73, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,cdc_ncm,cdc-wdm");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "E78127BCABE41799AC5303D");
