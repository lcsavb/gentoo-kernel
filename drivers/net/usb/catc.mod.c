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
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x17475388, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BA5A7A34D39E81F002254C9");
