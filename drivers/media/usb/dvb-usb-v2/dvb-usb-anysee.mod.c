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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0x847134a4, "dvb_usbv2_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x167e9e59, "param_ops_short" },
	{ 0xbcb190e6, "dvb_usbv2_generic_rw_locked" },
	{ 0xbbed9019, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x71266ba0, "usb_set_interface" },
	{ 0x38c3adce, "dvb_usbv2_probe" },
	{ 0x7f4bea61, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a9fe762, "dvb_ca_en50221_release" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x3a392e13, "dvb_usbv2_disconnect" },
	{ 0x681e3cee, "module_put" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c6045bd, "usb_bulk_msg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf4522bfc, "dvb_usbv2_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1966ea19, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x53f2ab7a, "dvb_ca_en50221_init" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0x8701a72c, "dvb_usbv2_reset_resume" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "i2c-core,dvb_usb_v2,rc-core,dvb-core");

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7F17613E55462B657B60CA3");
