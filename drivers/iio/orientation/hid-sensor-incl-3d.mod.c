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
	{ 0xabf5cdb9, "hid_sensor_pm_ops" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfb51a75b, "sensor_hub_register_callback" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x2a21630c, "hid_sensor_setup_trigger" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x7f7621ec, "hid_sensor_format_scale" },
	{ 0x342bcfcd, "sensor_hub_input_get_attribute_info" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c2a32a8, "hid_sensor_parse_common_attributes" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x29825252, "sensor_hub_input_attr_get_raw_value" },
	{ 0x4e8ed2e6, "hid_sensor_power_state" },
	{ 0xaf11d6a4, "hid_sensor_read_samp_freq_value" },
	{ 0x490f8c0c, "hid_sensor_read_raw_hyst_value" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc8cae09d, "hid_sensor_write_raw_hyst_value" },
	{ 0xe4a1b582, "hid_sensor_write_samp_freq_value" },
	{ 0x37a0cba, "kfree" },
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0xda3bbc34, "hid_sensor_remove_trigger" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x3f375a3d, "sensor_hub_remove_callback" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-trigger,hid-sensor-hub,industrialio,industrialio-triggered-buffer,hid-sensor-iio-common");

MODULE_ALIAS("platform:HID-SENSOR-200086");

MODULE_INFO(srcversion, "0E43005631D3415E74322AD");
