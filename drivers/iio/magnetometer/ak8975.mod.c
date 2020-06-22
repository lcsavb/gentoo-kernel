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
	{ 0x297ece81, "iio_show_mount_matrix" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0xb7cac888, "gpiod_get_raw_value" },
	{ 0xf9a482f9, "msleep" },
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x8995467c, "iio_read_mount_matrix" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbaf24a16, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0x12a38747, "usleep_range" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8975C*");
MODULE_ALIAS("of:N*T*Cak8975");
MODULE_ALIAS("of:N*T*Cak8975C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak8963C*");
MODULE_ALIAS("of:N*T*Cak8963");
MODULE_ALIAS("of:N*T*Cak8963C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09911C*");
MODULE_ALIAS("of:N*T*Cak09911");
MODULE_ALIAS("of:N*T*Cak09911C*");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912");
MODULE_ALIAS("of:N*T*Casahi-kasei,ak09912C*");
MODULE_ALIAS("of:N*T*Cak09912");
MODULE_ALIAS("of:N*T*Cak09912C*");
MODULE_ALIAS("i2c:ak8975");
MODULE_ALIAS("i2c:ak8963");
MODULE_ALIAS("i2c:AK8963");
MODULE_ALIAS("i2c:ak09911");
MODULE_ALIAS("i2c:ak09912");
MODULE_ALIAS("acpi*:AK8975:*");
MODULE_ALIAS("acpi*:AK8963:*");
MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("acpi*:AK009911:*");
MODULE_ALIAS("acpi*:AK09911:*");
MODULE_ALIAS("acpi*:AKM9911:*");
MODULE_ALIAS("acpi*:AK09912:*");

MODULE_INFO(srcversion, "1BB569B01EF32BEC168E688");
