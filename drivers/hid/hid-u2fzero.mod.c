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
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xfde26967, "devm_hwrng_register" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x58260f5b, "devm_led_classdev_register_ext" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xfae603b8, "usb_hid_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xc0e474fd, "usb_poison_urb" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000010C4p00008ACF");

MODULE_INFO(srcversion, "E932D678F0CE8C05C851A4F");
