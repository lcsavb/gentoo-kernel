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
	{ 0xa3114135, "rc_free_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xe884de84, "usb_string" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xb65ad390, "usb_alloc_coherent" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ea16622, "ir_raw_event_store" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4241ae7e, "ir_raw_event_store_with_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x5883163c, "usb_free_coherent" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0E9Cp0000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E2231E8F18E96630E20FB9");
