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
	{ 0x4c542262, "usb_stor_set_xfer_buf" },
	{ 0x90bf2f55, "usb_stor_bulk_transfer_buf" },
	{ 0xa014d63a, "usb_stor_access_xfer_buf" },
	{ 0xac8f52e7, "usb_stor_post_reset" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7f7a8d8c, "usb_stor_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fd68c8f, "usb_stor_probe2" },
	{ 0x4c8a945, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5005ae7, "usb_stor_pre_reset" },
	{ 0x439a356e, "usb_stor_reset_resume" },
	{ 0x78cab840, "usb_stor_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe8e6cf5f, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x1a274a07, "usb_stor_bulk_transfer_sg" },
	{ 0xc2f58242, "usb_stor_bulk_srb" },
	{ 0xa4d6f89a, "release_firmware" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v0CF2p6250d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5BA04D8D1AFC518945A5520");
