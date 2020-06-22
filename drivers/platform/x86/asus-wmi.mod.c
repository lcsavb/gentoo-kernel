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
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x391c97b1, "pci_scan_single_device" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x40120314, "single_open" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xb3418cbf, "battery_hook_unregister" },
	{ 0x65b4695, "wmi_get_acpi_device_uid" },
	{ 0x2f40834d, "pci_stop_and_remove_bus_device" },
	{ 0xda584c89, "single_release" },
	{ 0x1af07e1, "pci_get_slot" },
	{ 0x9cab34a6, "rfkill_set_led_trigger_name" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfd17c3ef, "debugfs_create_x32" },
	{ 0xff282521, "rfkill_register" },
	{ 0x1207ea98, "pci_bus_assign_resources" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x957323f3, "battery_hook_register" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x245e7217, "__pci_hp_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x457b2977, "pci_hp_deregister" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x57ffee52, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xbd97c29f, "pci_find_bus" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x4cbf0428, "pci_bus_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf2ed8118, "__platform_create_bundle" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xb69650ed, "led_classdev_notify_brightness_hw_changed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x400a8ad3, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe25df178, "pci_bus_add_device" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "rfkill,wmi,backlight,sparse-keymap,video");


MODULE_INFO(srcversion, "CD0D5DB715198AC310D69B2");
