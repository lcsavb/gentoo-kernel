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
	{ 0x167e9e59, "param_ops_short" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x8701a72c, "dvb_usbv2_reset_resume" },
	{ 0x847134a4, "dvb_usbv2_resume" },
	{ 0xf4522bfc, "dvb_usbv2_suspend" },
	{ 0x3a392e13, "dvb_usbv2_disconnect" },
	{ 0x38c3adce, "dvb_usbv2_probe" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0xad551889, "zd1301_demod_get_dvb_frontend" },
	{ 0x7fd0a372, "zd1301_demod_get_i2c_adapter" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0x681e3cee, "module_put" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb_usb_v2,i2c-core,zd1301_demod");

MODULE_ALIAS("usb:v0ACEp13A1d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FC9C08274DBD9680A721546");
