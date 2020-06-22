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
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x8995467c, "iio_read_mount_matrix" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9b4babd5, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x597e8b30, "__iio_device_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x297ece81, "iio_show_mount_matrix" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xae74bb8c, "iio_buffer_set_attrs" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x2cc813ee, "regmap_get_device" },
	{ 0xdc029e18, "regmap_raw_read" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x322e511e, "iio_push_event" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x655d28de, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "FB0E108959575E9E44BCCDF");
