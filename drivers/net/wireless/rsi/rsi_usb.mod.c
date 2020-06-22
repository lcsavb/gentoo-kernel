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
	{ 0x5fc72298, "rsi_91x_init" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xad40c8b5, "rsi_mac80211_detach" },
	{ 0xb6786ab5, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xf9814f29, "rsi_hal_device_init" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x603a9ed7, "rsi_91x_deinit" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x67060bf6, "rsi_bt_ops" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F3E4E8E813DEED00E58978D");
