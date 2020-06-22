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
	{ 0x543b5c74, "parport_ieee1284_read_byte" },
	{ 0xc2d88c99, "parport_ieee1284_read_nibble" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xcd21a96f, "parport_announce_port" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xa908a821, "parport_register_port" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0xcb256489, "usb_get_dev" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x712e52f7, "current_task" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x924d318c, "parport_put_port" },
	{ 0x13a68db5, "parport_remove_port" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x4d2a941b, "parport_ieee1284_interrupt" },
	{ 0x29361773, "complete" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xce8a3580, "usb_unlink_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x615d0729, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");

MODULE_ALIAS("usb:v047Ep1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B8p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ABp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06C6p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0729p1284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1293p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "49D5B17D06FB0DA5E3B119D");
