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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x21da2079, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x67e1c81f, "gpiod_get_value" },
	{ 0x5af1468d, "usb_add_phy_dev" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x8a78ed31, "regulator_set_current_limit" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");

MODULE_INFO(srcversion, "B2F8D1F5892531D914EB60E");
