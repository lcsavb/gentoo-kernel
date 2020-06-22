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
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x49392912, "iio_trigger_poll_chained" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0x8995467c, "iio_read_mount_matrix" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x39dd2af3, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x297ece81, "iio_show_mount_matrix" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,i2c-mux,industrialio,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Cinvensense,mpu3050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu3050C*");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050");
MODULE_ALIAS("of:N*T*Cinvn,mpu3050C*");
MODULE_ALIAS("i2c:mpu3050");

MODULE_INFO(srcversion, "1BE7B8FC7090FB81418866A");
