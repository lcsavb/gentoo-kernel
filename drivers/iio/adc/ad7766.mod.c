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
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0x3a706a75, "iio_trigger_validate_own_device" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0x17b8d3, "regulator_get_voltage" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5197e8b1, "__devm_iio_device_register" },
	{ 0x9ba99c7d, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd01c5979, "__devm_iio_trigger_register" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9b4babd5, "iio_trigger_poll" },
	{ 0x69ef11de, "iio_trigger_notify_done" },
	{ 0x311f5627, "iio_push_to_buffers" },
	{ 0xe8799010, "spi_sync" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7766");
MODULE_ALIAS("spi:ad7766-1");
MODULE_ALIAS("spi:ad7766-2");
MODULE_ALIAS("spi:ad7767");
MODULE_ALIAS("spi:ad7767-1");
MODULE_ALIAS("spi:ad7767-2");

MODULE_INFO(srcversion, "06FDF640E622E5FE49215E8");
