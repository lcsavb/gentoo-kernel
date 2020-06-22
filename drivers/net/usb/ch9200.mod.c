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
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xdbd53a71, "mii_nway_restart" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xca177467, "usbnet_defer_kevent" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9cf3544, "mii_ethtool_gset" },
	{ 0xb98f692f, "mii_check_media" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet,mii");

MODULE_ALIAS("usb:v1A86pE092d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0488E44AF73C8D569D5D565");
