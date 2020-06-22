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
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0xeba0d4b3, "st_sensors_set_dataready_irq" },
	{ 0xbd86df45, "st_sensors_power_enable" },
	{ 0x5081d39c, "st_sensors_set_enable" },
	{ 0x74d7047, "st_sensors_trigger_handler" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8365a74f, "st_sensors_deallocate_trigger" },
	{ 0x25ed6006, "st_sensors_sysfs_sampling_frequency_avail" },
	{ 0xc050c7d4, "st_sensors_allocate_trigger" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x7ff9bb3e, "st_sensors_set_fullscale_by_gain" },
	{ 0x17475388, "_dev_warn" },
	{ 0x98c4db0f, "st_sensors_validate_device" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x4030e3ca, "st_sensors_power_disable" },
	{ 0x6e4b4932, "st_sensors_init_sensor" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0x297ece81, "iio_show_mount_matrix" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x24cd5a90, "st_sensors_debugfs_reg_access" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa51b44bf, "st_sensors_get_settings_index" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98fbe726, "st_sensors_set_odr" },
	{ 0x37a0cba, "kfree" },
	{ 0xc417ec6f, "st_sensors_sysfs_scale_avail" },
	{ 0x56b3891c, "st_sensors_verify_id" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe9686d3a, "st_sensors_set_axis_enable" },
	{ 0x7e088693, "st_sensors_read_info_raw" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
	{ 0xbead065b, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,st_sensors,industrialio");


MODULE_INFO(srcversion, "FC23314F0D15CAA99617D69");
