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
	{ 0xfa94756d, "can_change_mtu" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0xf65ccabd, "open_candev" },
	{ 0x9ee11a36, "close_candev" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xfcf3c007, "can_free_echo_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xf163231, "netdev_info" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "89294DB496A48D70925E997");
