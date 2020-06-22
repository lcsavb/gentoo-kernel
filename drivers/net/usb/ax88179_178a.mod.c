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
	{ 0x5c2eb5e2, "usbnet_nway_reset" },
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
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x9cf3544, "mii_ethtool_gset" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8103fa9b, "usbnet_write_cmd_async" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf163231, "netdev_info" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe784458e, "usbnet_link_change" },
	{ 0x78bcf576, "usbnet_update_max_qlen" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4ef58fbc, "usbnet_write_cmd_nopm" },
	{ 0x86638119, "usbnet_write_cmd" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd07488c3, "usbnet_read_cmd_nopm" },
	{ 0xc9a416b5, "usbnet_read_cmd" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0xdd76d963, "mii_ethtool_get_link_ksettings" },
	{ 0x446293a7, "mii_ethtool_set_link_ksettings" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "33AD2DD3B3EA4E13551FB91");
