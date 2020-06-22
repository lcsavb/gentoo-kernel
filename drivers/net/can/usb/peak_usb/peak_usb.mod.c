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
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0x754d539c, "strlen" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xde071c4e, "driver_for_each_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9ee11a36, "close_candev" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x712e52f7, "current_task" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xfa94756d, "can_change_mtu" },
	{ 0x62a8f80a, "can_change_state" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xf65ccabd, "open_candev" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x391901a1, "alloc_canfd_skb" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0xfcf3c007, "can_free_echo_skb" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("usb:v0C72p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C72p0014d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "57934AC26FA7BCBBE3D7D57");
