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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x8a0614d6, "acpi_bus_unregister_driver" },
	{ 0xab623ef3, "acpi_bus_register_driver" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x7b161289, "input_unregister_polled_device" },
	{ 0xb0aad46c, "input_free_polled_device" },
	{ 0x8b09348e, "input_register_polled_device" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x36bf2262, "input_allocate_polled_device" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0x28753ca8, "platform_device_put" },
	{ 0xf621dfc1, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x53444ce9, "platform_device_add" },
	{ 0x3c82c25, "platform_device_alloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x58e526a5, "acpi_bus_get_status" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb8830e03, "led_classdev_register_ext" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0xad0cba41, "input_event" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x400a8ad3, "backlight_force_update" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0x57ffee52, "rfkill_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x54dec93b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight,input-polldev,sparse-keymap,video,rfkill");

MODULE_ALIAS("acpi*:ATK0100:*");
MODULE_ALIAS("acpi*:ATK0101:*");

MODULE_INFO(srcversion, "99F250EC9C5B33B774C621D");
