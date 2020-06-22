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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x3e38e6a2, "param_ops_string" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x734ecbd7, "thermal_zone_device_register" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xb9521ad4, "thermal_cooling_device_register" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xe919636a, "thermal_zone_device_update" },
	{ 0x7ab0a5fd, "thermal_zone_bind_cooling_device" },
	{ 0x915660a4, "thermal_zone_unbind_cooling_device" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x68afda08, "thermal_zone_device_unregister" },
	{ 0x926be065, "thermal_cooling_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE0D9838712E19A0980A2AD");
