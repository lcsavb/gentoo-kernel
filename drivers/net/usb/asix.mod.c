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
	{ 0x9cf3544, "mii_ethtool_gset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe784458e, "usbnet_link_change" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0xa7f0232e, "phy_ethtool_nway_reset" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0x78bcf576, "usbnet_update_max_qlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd07a6947, "phy_print_status" },
	{ 0x5c2eb5e2, "usbnet_nway_reset" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9cad97ff, "usbnet_set_link_ksettings" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x725ad137, "eth_platform_get_mac_address" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0xb13d43cc, "usbnet_get_link_ksettings" },
	{ 0xf9d1570b, "usbnet_get_drvinfo" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xd07488c3, "usbnet_read_cmd_nopm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xb4cb23d5, "usbnet_get_link" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x4ef58fbc, "usbnet_write_cmd_nopm" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xc9a416b5, "usbnet_read_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x836e6e7d, "genphy_resume" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb98f692f, "mii_check_media" },
	{ 0x29eaeba6, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x8eee7a73, "usbnet_unlink_rx_urbs" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8103fa9b, "usbnet_write_cmd_async" },
	{ 0x19a109d8, "usbnet_change_mtu" },
	{ 0x8680c7c3, "phy_connect" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3006f0bf, "mii_link_ok" },
	{ 0xb0e602eb, "memmove" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x86638119, "usbnet_write_cmd" },
	{ 0x744f1eb, "usbnet_set_msglevel" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "mii,libphy,usbnet");

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p061Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "67919C4F1ACD89901E0B8C7");
