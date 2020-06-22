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
	{ 0x179237c1, "gspca_suspend" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb793d54, "gspca_dev_probe" },
	{ 0x82e3d3ab, "gspca_expo_autogain" },
	{ 0x68015af5, "gspca_resume" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0x225076ce, "gspca_disconnect" },
	{ 0xe472dfdf, "gspca_coarse_grained_expo_autogain" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x835eced0, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbab879d8, "gspca_frame_add" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v046DpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0502pD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052BpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5pD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A5pD800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEpD001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0728pD001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FCD883170341276BBDF115D");
