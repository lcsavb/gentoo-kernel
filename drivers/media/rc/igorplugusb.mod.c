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
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa3ba928d, "ir_raw_event_handle" },
	{ 0x4241ae7e, "ir_raw_event_store_with_filter" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa3114135, "rc_free_device" },
	{ 0x4f91bd8a, "rc_register_device" },
	{ 0x83662f8e, "rc_allocate_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x12cdfb2d, "rc_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v03EBp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03EBp21FEd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FE4C99840D8AF5CD3B9BC46");
