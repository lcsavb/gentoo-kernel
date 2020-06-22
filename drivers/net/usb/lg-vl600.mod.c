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
	{ 0xf1f6e0ba, "usbnet_cdc_status" },
	{ 0x5309ff9f, "usbnet_resume" },
	{ 0xa89dd8aa, "usbnet_suspend" },
	{ 0xe661fcde, "usbnet_disconnect" },
	{ 0xfc4379c5, "usbnet_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x95476d9a, "usbnet_cdc_bind" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6aa171f6, "usbnet_cdc_unbind" },
	{ 0x37a0cba, "kfree" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb0e602eb, "memmove" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cdc_ether,usbnet");

MODULE_ALIAS("usb:v1004p61AAd*dc*dsc*dp*ic02isc06ip00in*");

MODULE_INFO(srcversion, "65838F3ED38F36951C1D174");
