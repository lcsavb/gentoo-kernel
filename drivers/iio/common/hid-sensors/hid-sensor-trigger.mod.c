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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b185bc4, "hid_sensor_batch_mode_supported" },
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x9a4a70b7, "iio_trigger_alloc" },
	{ 0xcc983080, "sensor_hub_get_feature" },
	{ 0x6c9102c9, "sensor_hub_device_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x1322822a, "hid_sensor_read_poll_value" },
	{ 0x711c81bf, "sensor_hub_device_close" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd65d6ba3, "hid_sensor_get_usage_index" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xb3ab18da, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x8c8b285d, "iio_trigger_free" },
	{ 0xae74bb8c, "iio_buffer_set_attrs" },
	{ 0x7b314c77, "hid_sensor_set_report_latency" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x942983ff, "hid_sensor_get_report_latency" },
};

MODULE_INFO(depends, "hid-sensor-iio-common,industrialio,hid-sensor-hub");


MODULE_INFO(srcversion, "4AFA9D771A29970676E7FF4");
