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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xcc983080, "sensor_hub_get_feature" },
	{ 0x342bcfcd, "sensor_hub_input_get_attribute_info" },
	{ 0x1af267f8, "int_pow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3ab18da, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
};

MODULE_INFO(depends, "hid-sensor-hub");


MODULE_INFO(srcversion, "9B1984B9E9F50B803CAE3F9");
