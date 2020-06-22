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
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7d3a45c9, "devm_rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x41c26c41, "devm_rc_allocate_device" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0xf18b5cb6, "ir_raw_event_set_idle" },
	{ 0x4241ae7e, "ir_raw_event_store_with_filter" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v04E8pFF30d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D6436F5BCD0CB813E5C75E7");
