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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x811606e8, "dvb_usb_device_exit" },
	{ 0x65de22b, "dvb_usb_device_init" },
	{ 0x2ac7433d, "dibusb_pid_filter" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x7f4bea61, "rc_keydown" },
	{ 0xae46954a, "usb_control_msg" },
	{ 0x19b83bd9, "dibusb_dib3000mc_frontend_attach" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x316ebfa2, "dibusb_dib3000mc_tuner_attach" },
	{ 0x78dcde8e, "dibusb2_0_streaming_ctrl" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x2711e1fa, "dibusb_i2c_algo" },
	{ 0x64a2676d, "dibusb_pid_filter_ctrl" },
	{ 0xbf659db4, "rc_repeat" },
};

MODULE_INFO(depends, "dvb-usb,dvb-usb-dibusb-common,rc-core,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v07CApA800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA801d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "54A2F7D7D130AD44D1C8A41");
