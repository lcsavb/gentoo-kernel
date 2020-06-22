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
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x96848186, "scnprintf" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "9DBEFE2E8C8CB1C1DCC37D1");
