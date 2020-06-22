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
	{ 0x9cad97ff, "usbnet_set_link_ksettings" },
	{ 0xb13d43cc, "usbnet_get_link_ksettings" },
	{ 0xb4cb23d5, "usbnet_get_link" },
	{ 0x5c2eb5e2, "usbnet_nway_reset" },
	{ 0x744f1eb, "usbnet_set_msglevel" },
	{ 0x29eaeba6, "usbnet_get_msglevel" },
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0x19a109d8, "usbnet_change_mtu" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x17475388, "_dev_warn" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x8103fa9b, "usbnet_write_cmd_async" },
	{ 0xf9d1570b, "usbnet_get_drvinfo" },
	{ 0x4790f3b0, "generic_mii_ioctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc9a416b5, "usbnet_read_cmd" },
	{ 0x86638119, "usbnet_write_cmd" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xe784458e, "usbnet_link_change" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "710D0221EB218926DD22EBB");
