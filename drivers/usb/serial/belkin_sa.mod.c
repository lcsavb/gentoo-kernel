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
	{ 0x41882528, "usb_serial_deregister_drivers" },
	{ 0xc4a8677d, "usb_serial_register_drivers" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0e5ad77, "usb_serial_generic_open" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x341e66bd, "usb_serial_generic_close" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc996376c, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v050Dp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Cp8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0565p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0921p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0921p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1203d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1BE7B2F34C2FD94BEA0A78D");
