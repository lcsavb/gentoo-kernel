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
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x83fd15b4, "netif_tx_stop_all_queues" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x6d495207, "register_netdev" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4cf8df0b, "usb_altnum_to_altsetting" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "D1974959E1DEE80DC5C79DD");
