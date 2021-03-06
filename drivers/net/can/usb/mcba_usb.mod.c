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
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0xf65ccabd, "open_candev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xfcf3c007, "can_free_echo_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0x9ee11a36, "close_candev" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x6f8688b6, "free_candev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xf163231, "netdev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v04D8p0A30d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "293B0D25273F1DE9C702096");
