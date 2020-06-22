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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xf621dfc1, "platform_device_del" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0x58260f5b, "devm_led_classdev_register_ext" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x56470118, "__warn_printk" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe76d743a, "sparse_keymap_entry_from_scancode" },
	{ 0x2b0ea6d2, "devm_backlight_device_register" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc3d00ddc, "acpi_device_hid" },
	{ 0x94f1ef78, "devm_input_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,backlight,video");

MODULE_ALIAS("acpi*:FUJ02B1:*");
MODULE_ALIAS("acpi*:FUJ02E3:*");

MODULE_INFO(srcversion, "D06F1AB91DC08FB496AA131");
