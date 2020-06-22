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
	{ 0x69acdf38, "memcpy" },
	{ 0xd789caba, "nfc_digital_register_device" },
	{ 0x84103f97, "nfc_digital_allocate_device" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xfd94814e, "complete_all" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x29361773, "complete" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xf2f3f65, "nfc_digital_free_device" },
	{ 0x43ffb7ba, "nfc_digital_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfc_digital");

MODULE_ALIAS("usb:v054Cp06C1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp06C3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "374DD1E1345017744B1FD56");
