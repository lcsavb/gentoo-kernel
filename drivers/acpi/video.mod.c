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
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x9939eba0, "backlight_unregister_notifier" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x926be065, "thermal_cooling_device_unregister" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0xacea8173, "acpi_debug_print" },
	{ 0x38ffba81, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe304f416, "acpi_notifier_call_chain" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x72676450, "acpi_match_device_ids" },
	{ 0xad0cba41, "input_event" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2f384db3, "acpi_is_video_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x91a14cb0, "backlight_device_get_by_type" },
	{ 0xa40ff01b, "acpi_dbg_layer" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xcab9941b, "acpi_get_pci_dev" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0xe3a53f4c, "sort" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x32e6f1a0, "acpi_video_backlight_string" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xdc512134, "backlight_register_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfe9ebbbb, "acpi_osi_is_win8" },
	{ 0xddad7952, "acpi_dbg_level" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xefcea2e7, "acpi_warning" },
	{ 0xb9521ad4, "thermal_cooling_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x377d8004, "acpi_error" },
	{ 0x7d12d76d, "acpi_get_parent" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x400a8ad3, "backlight_force_update" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xc3d00ddc, "acpi_device_hid" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "backlight");

MODULE_ALIAS("acpi*:LNXVIDEO:*");

MODULE_INFO(srcversion, "BD31887854AB8854F17BE20");
