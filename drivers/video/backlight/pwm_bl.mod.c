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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x17475388, "_dev_warn" },
	{ 0x984e7137, "pwm_request" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x76a31c5c, "regulator_is_enabled" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0xb241c7e2, "devm_pwm_get" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xcedfa5ac, "gpiod_get_direction" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x15121018, "pwm_free" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x88b255fc, "pwm_apply_state" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight");


MODULE_INFO(srcversion, "8A8B8FD0DD9FE5538AC058D");
