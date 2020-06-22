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
	{ 0xf12b47cc, "gpiochip_generic_config" },
	{ 0xd517f601, "seq_puts" },
	{ 0xd30737d8, "devm_gpiochip_add_data" },
	{ 0x1b8822d8, "pinctrl_gpio_direction_output" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1a3a92e0, "gpiochip_generic_free" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xa0ee45b4, "handle_edge_irq" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1dea5f45, "gpiochip_line_is_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x5e75c55f, "gpiochip_irqchip_add_key" },
	{ 0x4fbd1c8a, "device_get_match_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x41a8bca0, "gpiochip_is_requested" },
	{ 0x365db46d, "devm_pinctrl_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdf711e6, "handle_bad_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc2f4c418, "pinctrl_dev_get_drvdata" },
	{ 0x5be2ec40, "gpiochip_add_pin_range" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xafb1c297, "gpiochip_set_chained_irqchip" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xe2895987, "gpiochip_generic_request" },
	{ 0x1bc5eebe, "pinctrl_gpio_direction_input" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xc8da0fe1, "handle_level_irq" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xb825523f, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FDABD698FC0C0DAFA018A36");
