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
	{ 0xa6a38879, "iio_read_const_attr" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe385a9db, "regmap_noinc_read" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0xd01c5979, "__devm_iio_trigger_register" },
	{ 0x3a706a75, "iio_trigger_validate_own_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x51b5149e, "iio_device_claim_direct_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd94181ab, "get_device" },
	{ 0x36a099f6, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xae74bb8c, "iio_buffer_set_attrs" },
	{ 0xeb6a950e, "iio_device_release_direct_mode" },
	{ 0x9ba99c7d, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "98222EFAFA3BFFD2758FC3F");
