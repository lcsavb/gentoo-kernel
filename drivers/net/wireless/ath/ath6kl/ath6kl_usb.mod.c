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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a198113, "ath6kl_core_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xeb662c5d, "ath6kl_core_cleanup" },
	{ 0x9584185d, "ath6kl_dbg" },
	{ 0x9aaad60e, "ath6kl_core_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb9a689dd, "ath6kl_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1354043d, "ath6kl_warn" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x47f4dbb6, "ath6kl_stop_txrx" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x4b7edeb, "ath6kl_core_init" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x601975c, "ath6kl_core_rx_complete" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2c4d578b, "ath6kl_core_tx_complete" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath6kl_core");

MODULE_ALIAS("usb:v0CF3p9375d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p9374d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C2731D87CEC8826D4392118");
