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
	{ 0xde4c3ff6, "v4l2_ctrl_cluster" },
	{ 0x179237c1, "gspca_suspend" },
	{ 0xb793d54, "gspca_dev_probe" },
	{ 0x82e3d3ab, "gspca_expo_autogain" },
	{ 0x68015af5, "gspca_resume" },
	{ 0x8518d66f, "v4l2_ctrl_new_std" },
	{ 0x225076ce, "gspca_disconnect" },
	{ 0xad0cba41, "input_event" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x835eced0, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbab879d8, "gspca_frame_add" },
	{ 0xa7c60f6d, "v4l2_ctrl_handler_init_class" },
	{ 0x1966ea19, "usb_register_driver" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v06F8p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p301Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2623d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2624d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2625d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2626d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2627d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2628d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap262Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap262Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p2001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "747B3F4861528846A56F388");
