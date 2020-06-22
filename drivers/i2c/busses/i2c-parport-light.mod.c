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
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17475388, "_dev_warn" },
	{ 0x433c7323, "i2c_setup_smbus_alert" },
	{ 0xf1d5760e, "i2c_bit_add_bus" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,i2c-algo-bit");


MODULE_INFO(srcversion, "E9B64E583EAA2B1DCFC5AC1");
