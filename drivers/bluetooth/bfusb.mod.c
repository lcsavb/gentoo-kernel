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
	{ 0xdcf6a8c, "skb_push" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xc3f01f39, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3CF624B3F05A1D418436FDB");
