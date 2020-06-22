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
	{ 0xde4c3ff6, "v4l2_ctrl_cluster" },
	{ 0x179237c1, "gspca_suspend" },
	{ 0xb793d54, "gspca_dev_probe" },
	{ 0x68015af5, "gspca_resume" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0x225076ce, "gspca_disconnect" },
	{ 0xcf5d43a7, "v4l2_ctrl_new_std_menu" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xbab879d8, "gspca_frame_add" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v041Ep405Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0892d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0896d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0897d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp4802d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "018AF275F0821CCB30D1FEC");
