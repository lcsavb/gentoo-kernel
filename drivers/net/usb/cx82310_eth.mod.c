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
	{ 0xdcf6a8c, "skb_push" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1a8c99a, "usbnet_get_endpoints" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe884de84, "usb_string" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x67addc43, "usbnet_skb_return" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbnet");

MODULE_ALIAS("usb:v0572pCB01d*dcFFdsc00dp00ic*isc*ip*in*");

MODULE_INFO(srcversion, "7BD2F6DAAA1EF783C5CC97F");
