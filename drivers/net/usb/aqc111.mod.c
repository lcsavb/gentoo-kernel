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
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x744f1eb, "usbnet_set_msglevel" },
	{ 0x29eaeba6, "usbnet_get_msglevel" },
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xd07488c3, "usbnet_read_cmd_nopm" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xf163231, "netdev_info" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6da97085, "usb_driver_set_configuration" },
	{ 0x37a0cba, "kfree" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0x4d6e8b39, "usb_reset_configuration" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9d1570b, "usbnet_get_drvinfo" },
	{ 0xca177467, "usbnet_defer_kevent" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xc9a416b5, "usbnet_read_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8103fa9b, "usbnet_write_cmd_async" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v2ECApC101d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2790d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v0B95p2791d*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v20F4pE05Ad*dc*dsc*dp*ic02isc06ip00in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*icFFisc*ip*in*");
MODULE_ALIAS("usb:v1C04p0015d*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "BB8B3583DF6D104EA245BF4");
