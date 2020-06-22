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
	{ 0x9cad97ff, "usbnet_set_link_ksettings" },
	{ 0xb13d43cc, "usbnet_get_link_ksettings" },
	{ 0x5c2eb5e2, "usbnet_nway_reset" },
	{ 0x744f1eb, "usbnet_set_msglevel" },
	{ 0x29eaeba6, "usbnet_get_msglevel" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xe784458e, "usbnet_link_change" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xf35b154f, "usbnet_status_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x73a22dc1, "usbnet_status_start" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86638119, "usbnet_write_cmd" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x37a0cba, "kfree" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9a416b5, "usbnet_read_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0xf9d1570b, "usbnet_get_drvinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "79024F3EC1EE44C7D105361");
