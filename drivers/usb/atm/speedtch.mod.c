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
	{ 0x1159a640, "param_ops_uint" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x4d51b0fb, "usbatm_usb_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x38d45997, "usb_reset_device" },
	{ 0x57a92785, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf6a978cc, "usb_driver_claim_interface" },
	{ 0xd95d1ad5, "atm_dev_signal_change" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x1815e53d, "usb_driver_release_interface" },
	{ 0xc29f72b3, "usb_ifnum_to_if" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbc80691e, "usb_submit_urb" },
	{ 0xe884de84, "usb_string" },
	{ 0xc5850110, "printk" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc504b20a, "usb_free_urb" },
	{ 0xb9f430ee, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6e3bcd97, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
