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
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x9a4a70b7, "iio_trigger_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x49392912, "iio_trigger_poll_chained" },
	{ 0x17475388, "_dev_warn" },
	{ 0xb0c15644, "__iio_trigger_register" },
	{ 0x39dd2af3, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x8c8b285d, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "8E7A88C7F6E9E1BA2BF3004");
