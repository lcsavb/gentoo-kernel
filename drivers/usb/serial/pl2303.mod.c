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
	{ 0x94862af9, "usb_serial_generic_tiocmiwait" },
	{ 0x41882528, "usb_serial_deregister_drivers" },
	{ 0xc4a8677d, "usb_serial_register_drivers" },
	{ 0x47657ba2, "tty_insert_flip_string_fixed_flag" },
	{ 0x50f384d0, "__tty_insert_flip_char" },
	{ 0x7edd9dc, "usb_serial_handle_sysrq_char" },
	{ 0xbfa1b55b, "tty_flip_buffer_push" },
	{ 0x3b542f12, "tty_kref_put" },
	{ 0xbe7ec5a, "usb_serial_handle_dcd_change" },
	{ 0x7c338244, "tty_port_tty_get" },
	{ 0xec01edec, "usb_serial_handle_break" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd0e5ad77, "usb_serial_generic_open" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x9c6d8a9d, "usb_clear_halt" },
	{ 0xc996376c, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x341e66bd, "usb_serial_generic_close" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v067Bp2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp04BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp1234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpAAA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0609d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067BpE1F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Bp2304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0A03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0A0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep5003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep5004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EBAp1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EBAp2080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF7p0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0584pB000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2478p2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1453p4026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0731p0528d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p2068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F7p02DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F5p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p4027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0745p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v078Bp1234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B5pAC70d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E55p110Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0731p2003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Fp9720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11F6p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ADp0FBAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5372p2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3524d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p4349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0F7Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0B39d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p4439d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3139d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p3239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p026Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p5039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0956d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0437d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11ADp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B63p6530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B8Cp2303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CAAp3001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "124B6F2AA653F7E3A8DB267");
