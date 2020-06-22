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
	{ 0xbcafef2b, "hci_recv_diag" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x511f9fcc, "hci_register_dev" },
	{ 0x73421355, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x7fb21c20, "hci_set_fw_info" },
	{ 0x718b8b7, "bt_info" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8790ad6a, "__hci_cmd_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x26054bdc, "hci_free_dev" },
	{ 0x8b2db4, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7312D0036C6DFD3C9DD3B58");
