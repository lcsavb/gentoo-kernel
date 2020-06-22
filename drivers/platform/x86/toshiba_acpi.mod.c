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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf7d38860, "i8042_install_filter" },
	{ 0xff282521, "rfkill_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x542a5c87, "proc_create_single_data" },
	{ 0x5e87617f, "proc_create_data" },
	{ 0x57ffee52, "rfkill_alloc" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xff27f212, "iio_device_alloc" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x2e76b019, "misc_register" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x40120314, "single_open" },
	{ 0xd44f7a9f, "PDE_DATA" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x30b2832b, "i8042_remove_filter" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x3dd35f8d, "iio_device_free" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x867234, "misc_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0xb69650ed, "led_classdev_notify_brightness_hw_changed" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x172f6ecd, "sysfs_update_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rfkill,backlight,video,industrialio,sparse-keymap,wmi");

MODULE_ALIAS("acpi*:TOS6200:*");
MODULE_ALIAS("acpi*:TOS6207:*");
MODULE_ALIAS("acpi*:TOS6208:*");
MODULE_ALIAS("acpi*:TOS1900:*");

MODULE_INFO(srcversion, "ABC0069A5EAE610DD4FCF2D");
