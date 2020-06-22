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
	{ 0x3a706a75, "iio_trigger_validate_own_device" },
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0xd1dd8721, "iio_validate_scan_mask_onehot" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xeb6a950e, "iio_device_release_direct_mode" },
	{ 0x51b5149e, "iio_device_claim_direct_mode" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x49392912, "iio_trigger_poll_chained" },
	{ 0x322e511e, "iio_push_event" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x9ba99c7d, "devm_iio_triggered_buffer_setup" },
	{ 0xd01c5979, "__devm_iio_trigger_register" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,i2c-core,industrialio-triggered-buffer,regmap-i2c");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4035");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4035C*");

MODULE_INFO(srcversion, "743754BE3F8615921FC5862");
