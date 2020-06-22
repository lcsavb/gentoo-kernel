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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6aa171f6, "usbnet_cdc_unbind" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xdad9c346, "usbnet_generic_cdc_bind" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xb0628886, "usbnet_stop" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x8e37f661, "usbnet_get_stats64" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x3e342bee, "usbnet_start_xmit" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd0c95d4a, "usbnet_tx_timeout" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0xefbbc2f8, "usbnet_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x738d1307, "usb_interrupt_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xb0e602eb, "memmove" },
	{ 0x591912fa, "eth_mac_addr" },
};

MODULE_INFO(depends, "usbnet,cdc_ether");

MODULE_ALIAS("usb:v1630p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc04ip01in*");

MODULE_INFO(srcversion, "A9FBEA008EA5BDB759FB1F4");
