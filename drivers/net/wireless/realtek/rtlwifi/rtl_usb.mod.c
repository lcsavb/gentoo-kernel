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
	{ 0x1a19fb3f, "ieee80211_rx_napi" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x82e74355, "rtl_deinit_deferred_work" },
	{ 0x3e93c4ce, "rtl_deinit_core" },
	{ 0x8c07c5a6, "usb_get_from_anchor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xae775af2, "ieee80211_unregister_hw" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf115de16, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1455cb0c, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x214e9618, "rtl_action_proc" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xcce7bc2, "rtl_init_rx_config" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x8686fcfa, "ieee80211_tx_status_irqsafe" },
	{ 0x2ce1b183, "rtl_ops" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9b3e27d6, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xc3db41d1, "rtl_beacon_statistic" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "C4940B6FC73A6CC356429CD");
