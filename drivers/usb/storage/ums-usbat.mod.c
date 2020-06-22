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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4c542262, "usb_stor_set_xfer_buf" },
	{ 0xa014d63a, "usb_stor_access_xfer_buf" },
	{ 0xac8f52e7, "usb_stor_post_reset" },
	{ 0x7f7a8d8c, "usb_stor_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1fd68c8f, "usb_stor_probe2" },
	{ 0x3763d33, "fill_inquiry_response" },
	{ 0x4c8a945, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5005ae7, "usb_stor_pre_reset" },
	{ 0x439a356e, "usb_stor_reset_resume" },
	{ 0xbb2e1112, "usb_stor_ctrl_transfer" },
	{ 0x78cab840, "usb_stor_suspend" },
	{ 0x719e6a1f, "usb_stor_CB_reset" },
	{ 0x842cb3bb, "usb_stor_clear_halt" },
	{ 0xe8e6cf5f, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x15033a3a, "usb_stor_resume" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x1a274a07, "usb_stor_bulk_transfer_sg" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "25B0CFBE94AEA955D90D48F");
