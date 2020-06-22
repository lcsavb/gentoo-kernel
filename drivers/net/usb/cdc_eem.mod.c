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
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x7961f132, "usbnet_device_suggests_idle" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "10D97D26E5592B8F6591AB8");
