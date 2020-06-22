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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd19db114, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x57ffee52, "rfkill_alloc" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x81c5a4ff, "sparse_keymap_setup" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x38ffba81, "acpi_bus_get_device" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x400a8ad3, "backlight_force_update" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd517f601, "seq_puts" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x40120314, "single_open" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x87463a4e, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5850110, "printk" },
	{ 0x557762e2, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "backlight,rfkill,wmi,video,sparse-keymap");

MODULE_ALIAS("acpi*:VPC2004:*");

MODULE_INFO(srcversion, "80E7E533E4F73AFAAC0BE4C");
