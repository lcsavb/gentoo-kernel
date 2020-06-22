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
	{ 0xab06bf8b, "_dev_err" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xc8eba256, "device_get_named_child_node" },
	{ 0x75ec1a87, "pci_get_class" },
	{ 0xeca5d40d, "software_node_find_by_name" },
	{ 0x8db2c04f, "software_node_register_nodes" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x9fbe20e, "acpi_dev_gpio_irq_get" },
	{ 0xb7adb7ca, "regulator_put" },
	{ 0xb0dc265d, "regulator_get_optional" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf8f0c157, "i2c_acpi_new_device" },
	{ 0x9d3e00a7, "device_reprobe" },
	{ 0x510472f7, "i2c_for_each_dev" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xbe7c83c9, "fwnode_handle_put" },
	{ 0x8d6ac24d, "software_node_fwnode" },
	{ 0x4bfba5f1, "software_node_unregister_nodes" },
	{ 0xc3d00ddc, "acpi_device_hid" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("acpi*:INT33FE:*");

MODULE_INFO(srcversion, "37F0ABEF05FE9EFCE5E16F2");
