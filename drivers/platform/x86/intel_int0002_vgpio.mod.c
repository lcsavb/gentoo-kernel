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
	{ 0xb31a754a, "pm_wakeup_dev_event" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7b6f9536, "acpi_register_wakeup_handler" },
	{ 0xafb1c297, "gpiochip_set_chained_irqchip" },
	{ 0x5e75c55f, "gpiochip_irqchip_add_key" },
	{ 0xa0ee45b4, "handle_edge_irq" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd30737d8, "devm_gpiochip_add_data" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x8a45a555, "acpi_unregister_wakeup_handler" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:INT0002:*");

MODULE_INFO(srcversion, "9530040D725F012B21BB782");
