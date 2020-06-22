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
	{ 0xf9a482f9, "msleep" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x17475388, "_dev_warn" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x8995467c, "iio_read_mount_matrix" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0xd01c5979, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x51b5149e, "iio_device_claim_direct_mode" },
	{ 0x297ece81, "iio_show_mount_matrix" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xeb6a950e, "iio_device_release_direct_mode" },
	{ 0x9ba99c7d, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x2cc813ee, "regmap_get_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "9CC7777F5D10A72A62D5598");
