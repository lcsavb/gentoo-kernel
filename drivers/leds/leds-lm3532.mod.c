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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fd765f7, "device_property_read_u8_array" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x58260f5b, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x33ff0a74, "device_get_next_child_node" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4b088d38, "device_get_child_node_count" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:lm3532-led");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");

MODULE_INFO(srcversion, "C36D594631B2C9E5BE2B2F8");
