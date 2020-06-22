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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x41882528, "usb_serial_deregister_drivers" },
	{ 0xc4a8677d, "usb_serial_register_drivers" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0xfbcee99, "usb_autopm_get_interface_no_resume" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8c07c5a6, "usb_get_from_anchor" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf268816e, "usb_unanchor_urb" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0x52a578fc, "usb_anchor_urb" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe0ffbad, "usb_autopm_get_interface_async" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x60b411bb, "usb_serial_port_softint" },
	{ 0x46638f19, "usb_autopm_put_interface_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x96833e4d, "usb_autopm_put_interface" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x94b1e044, "usb_autopm_get_interface" },
	{ 0x67211d90, "tty_port_tty_hangup" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v0F3Dp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p1B1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p211Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p1E1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0224d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0023d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p0025d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6802d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6808d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6809d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6833d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6834d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6838d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p683Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6850d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6851d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6852d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6853d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6855d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6856d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6859d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p685Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p6880d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6890d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6891d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6892d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p6893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1199p68ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "F7567B248F0A20CE529D89F");
