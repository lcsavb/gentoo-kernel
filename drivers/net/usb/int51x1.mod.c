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
	{ 0x19a109d8, "usbnet_change_mtu" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0x3d556d38, "usbnet_get_ethernet_addr" },
	{ 0xf163231, "netdev_info" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x8103fa9b, "usbnet_write_cmd_async" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v09E1p5121d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BEC482D241016E986F95D2");
