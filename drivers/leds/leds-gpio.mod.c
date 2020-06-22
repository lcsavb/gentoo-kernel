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
	{ 0x42a508e0, "_dev_info" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0x70edc336, "devm_gpiod_get_index" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0xb492c183, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x33ff0a74, "device_get_next_child_node" },
	{ 0x44343528, "gpiod_set_consumer_name" },
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4b088d38, "device_get_child_node_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0x58260f5b, "devm_led_classdev_register_ext" },
	{ 0xcb328937, "gpiod_direction_output" },
	{ 0xf03eec44, "gpiod_cansleep" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "0B46879BE05BCD6BAC86B7E");
