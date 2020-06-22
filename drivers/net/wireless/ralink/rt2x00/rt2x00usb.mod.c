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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x39a0d6a9, "rt2x00lib_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6cd78316, "rt2x00lib_dmastart" },
	{ 0xb3463c7c, "rt2x00queue_flush_queue" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x4a2c8149, "rt2x00queue_for_each_entry" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc7d28cc6, "rt2x00queue_start_queue" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcac452ab, "rt2x00lib_remove_dev" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x6485be2c, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0xe1837372, "rt2x00lib_rxdone" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x1e6e12fb, "rt2x00lib_txdone_noinfo" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xd89abafb, "rt2x00lib_dmadone" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xbdfe01c5, "rt2x00lib_probe_dev" },
	{ 0x3eea0b3e, "rt2x00queue_stop_queue" },
	{ 0x1c081303, "rt2x00lib_suspend" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "8EEEEC015EE0B18A21ED01F");
