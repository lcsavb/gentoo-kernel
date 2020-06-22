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
	{ 0xf9a482f9, "msleep" },
	{ 0x90bf2f55, "usb_stor_bulk_transfer_buf" },
	{ 0xac8f52e7, "usb_stor_post_reset" },
	{ 0xec186db3, "usb_stor_control_msg" },
	{ 0x7f7a8d8c, "usb_stor_disconnect" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x1fd68c8f, "usb_stor_probe2" },
	{ 0x4c8a945, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa5005ae7, "usb_stor_pre_reset" },
	{ 0x439a356e, "usb_stor_reset_resume" },
	{ 0x78cab840, "usb_stor_suspend" },
	{ 0xe8e6cf5f, "usb_stor_probe1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x15033a3a, "usb_stor_resume" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xc2f58242, "usb_stor_bulk_srb" },
};

MODULE_INFO(depends, "usb-storage");

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E3AA4AA73312AFDA83D671A");
