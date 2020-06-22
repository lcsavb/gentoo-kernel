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
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xf621dfc1, "platform_device_del" },
	{ 0xa571ade0, "__platform_driver_probe" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x67c03b9e, "acpi_initialize_hp_context" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x148689b2, "acpi_bus_trim" },
	{ 0x6866139b, "bus_for_each_dev" },
	{ 0xb9baa121, "platform_bus_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xad0cba41, "input_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xc3d00ddc, "acpi_device_hid" },
	{ 0x38ffba81, "acpi_bus_get_device" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x49b163b8, "acpi_bus_scan" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi");


MODULE_INFO(srcversion, "D7BCF7015133D39E5BA5D1A");
