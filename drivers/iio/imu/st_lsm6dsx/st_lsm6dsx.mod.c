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
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x4b14f197, "iio_get_time_ns" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1bf4252e, "iio_device_attach_buffer" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x51b5149e, "iio_device_claim_direct_mode" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeb6a950e, "iio_device_release_direct_mode" },
	{ 0x96848186, "scnprintf" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0x454bfaca, "devm_iio_kfifo_allocate" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x17cc7300, "regmap_write" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");


MODULE_INFO(srcversion, "B5479FAE9033A681880F01F");
