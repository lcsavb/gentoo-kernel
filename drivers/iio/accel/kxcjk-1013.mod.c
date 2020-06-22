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
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x322e511e, "iio_push_event" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0x36a099f6, "__module_get" },
	{ 0xd94181ab, "get_device" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9b4babd5, "iio_trigger_poll" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbaf24a16, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013");
MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013C*");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9C*");
MODULE_ALIAS("i2c:kxcjk1013");
MODULE_ALIAS("i2c:kxcj91008");
MODULE_ALIAS("i2c:kxtj21009");
MODULE_ALIAS("i2c:kxtf9");
MODULE_ALIAS("i2c:SMO8500");
MODULE_ALIAS("acpi*:KXCJ1013:*");
MODULE_ALIAS("acpi*:KXCJ1008:*");
MODULE_ALIAS("acpi*:KXCJ9000:*");
MODULE_ALIAS("acpi*:KIOX0008:*");
MODULE_ALIAS("acpi*:KIOX0009:*");
MODULE_ALIAS("acpi*:KIOX000A:*");
MODULE_ALIAS("acpi*:KIOX010A:*");
MODULE_ALIAS("acpi*:KIOX020A:*");
MODULE_ALIAS("acpi*:KXTJ1009:*");
MODULE_ALIAS("acpi*:KXJ2109:*");
MODULE_ALIAS("acpi*:SMO8500:*");

MODULE_INFO(srcversion, "F84695D0CADF2E72792CB78");
