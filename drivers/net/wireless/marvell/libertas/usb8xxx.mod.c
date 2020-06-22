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
	{ 0xf9a482f9, "msleep" },
	{ 0x982628d7, "lbs_host_sleep_cfg" },
	{ 0x7f79c71c, "lbs_resume" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x19f204a7, "lbs_stop_card" },
	{ 0x9c937eee, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbc8047d1, "lbs_start_card" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x12a1ca49, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x24d9f088, "lbs_send_tx_feedback" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9d18f7d6, "lbs_get_firmware_async" },
	{ 0x260608ec, "lbs_cmd_copyback" },
	{ 0x8a26ca50, "lbs_suspend" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x80fea394, "lbs_remove_card" },
	{ 0x3a117b68, "lbs_process_rxed_packet" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0xcc580c56, "lbs_host_to_card_done" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x50bb222, "lbs_add_card" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xfc11f247, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("usb:v1286p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A3p8388d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "810C90B705B65653ECF1F68");
