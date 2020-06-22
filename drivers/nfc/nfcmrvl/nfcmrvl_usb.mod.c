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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x278980ab, "nfcmrvl_nci_unregister_dev" },
	{ 0xa2f9fd79, "nfcmrvl_nci_recv_frame" },
	{ 0x8c07c5a6, "usb_get_from_anchor" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x1a281859, "pv_ops" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1a5d6525, "nfcmrvl_nci_register_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
};

MODULE_INFO(depends, "nfcmrvl");

MODULE_ALIAS("usb:v1286p2046d*dc*dsc*dp*icFFisc04ip01in*");

MODULE_INFO(srcversion, "8090A6559EBB91CF2BBB5DE");
