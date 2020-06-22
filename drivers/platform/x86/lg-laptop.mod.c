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
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0xdb064b1c, "sparse_keymap_report_entry" },
	{ 0xe76d743a, "sparse_keymap_entry_from_scancode" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap");

MODULE_ALIAS("acpi*:LGEX0815:*");

MODULE_INFO(srcversion, "1FFFFEC007ACEDDD77889AB");
