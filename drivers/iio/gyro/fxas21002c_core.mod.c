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
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x49392912, "iio_trigger_poll_chained" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd01c5979, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1230fc15, "devm_regmap_field_alloc" },
	{ 0xcafe87d6, "regmap_field_read" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x412512d2, "regmap_field_update_bits_base" },
	{ 0x9ba99c7d, "devm_iio_triggered_buffer_setup" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x2cc813ee, "regmap_get_device" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "7F6166BF4AE6251D7A3E9D3");
