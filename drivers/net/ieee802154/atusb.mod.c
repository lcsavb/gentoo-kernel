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
	{ 0x42a508e0, "_dev_info" },
	{ 0xc804b2f8, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x2acec9a2, "ieee802154_alloc_hw" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x17475388, "_dev_warn" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xdd8a9748, "ieee802154_xmit_complete" },
	{ 0x53a0bfc0, "__dev_kfree_skb_irq" },
	{ 0xddac10ef, "ieee802154_wake_queue" },
	{ 0x99704589, "ieee802154_rx_irqsafe" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x81388c67, "ieee802154_free_hw" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0x63748c50, "ieee802154_unregister_hw" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8c07c5a6, "usb_get_from_anchor" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "97B1836FA9D2878CA785887");
