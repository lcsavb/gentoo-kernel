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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdfa76b2e, "mwifiex_cancel_hs" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xbcbd0b60, "mwifiex_write_data_complete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcfa9c1a8, "mwifiex_process_sleep_confirm_resp" },
	{ 0xd558dcd1, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5e585a5d, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf53ab1b1, "mwifiex_add_card" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x8b756ffe, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8256661, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4f02aaef, "mwifiex_fw_dump_event" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x1fecd6a5, "mwifiex_deauthenticate_all" },
	{ 0xebdbf629, "mwifiex_remove_card" },
	{ 0x12b1830a, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xde38cd2d, "mwifiex_init_shutdown_fw" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "54127A001812D64BED2E68C");
