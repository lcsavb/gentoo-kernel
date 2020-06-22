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
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x5e75c55f, "gpiochip_irqchip_add_key" },
	{ 0x4109798, "handle_simple_irq" },
	{ 0x5be2ec40, "gpiochip_add_pin_range" },
	{ 0xd17ba9c4, "gpiochip_add_data_with_key" },
	{ 0x365db46d, "devm_pinctrl_register" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xc6dcbeba, "devm_ioremap_nocache" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc2f4c418, "pinctrl_dev_get_drvdata" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xc8da0fe1, "handle_level_irq" },
	{ 0xa0ee45b4, "handle_edge_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c71f7ca, "gpiochip_remove" },
	{ 0x1dea5f45, "gpiochip_line_is_irq" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:AMD0030:*");
MODULE_ALIAS("acpi*:AMDI0030:*");

MODULE_INFO(srcversion, "4221365B4F1FE14BD5643A4");
