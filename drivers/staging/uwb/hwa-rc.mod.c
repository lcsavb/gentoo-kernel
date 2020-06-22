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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4d137277, "uwb_rc_add" },
	{ 0xf8a66f0d, "usb_get_intf" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x61223358, "uwb_rc_alloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5e307da8, "uwb_rc_reset_all" },
	{ 0xe89ac73e, "uwb_rc_neh_error" },
	{ 0x246b9cbb, "uwb_rc_neh_grok" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x861a6924, "usb_lock_device_for_reset" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x18c895b7, "uwb_rc_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xe1b5d657, "usb_put_intf" },
	{ 0x9f04c11a, "uwb_rc_rm" },
	{ 0xc5bfd3a2, "uwb_rc_pre_reset" },
	{ 0xaa5d0c, "uwb_rc_post_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uwb");

MODULE_ALIAS("usb:v07D1p3D02d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v8086p0C3Bd*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc01ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip02in*");

MODULE_INFO(srcversion, "ACF9CFB4C4B4EE65F59DDA7");
