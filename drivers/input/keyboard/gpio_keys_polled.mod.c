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
	{ 0x5db40570, "fwnode_property_present" },
	{ 0x70aff7e1, "fwnode_property_read_string" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0x933efdaa, "device_property_read_string" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0x4b088d38, "device_get_child_node_count" },
	{ 0xb492c183, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0x33ff0a74, "device_get_next_child_node" },
	{ 0x8b09348e, "input_register_polled_device" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0xbea323bd, "devm_input_allocate_polled_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xad0cba41, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Cgpio-keys-polled");
MODULE_ALIAS("of:N*T*Cgpio-keys-polledC*");

MODULE_INFO(srcversion, "ADCCFC7978BDDC83FFA2B4C");
