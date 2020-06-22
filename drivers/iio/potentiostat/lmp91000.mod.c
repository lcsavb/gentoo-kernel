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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x215f956e, "devm_iio_trigger_alloc" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x95e5790d, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1f0d764, "iio_convert_raw_to_processed" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x49392912, "iio_trigger_poll_chained" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x99486340, "iio_read_channel_scale" },
	{ 0x3acaf9b3, "iio_read_channel_offset" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x9004b748, "iio_trigger_unregister" },
	{ 0xda7fb0d, "iio_triggered_buffer_cleanup" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0x89d574a, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,industrialio,regmap-i2c,industrialio-buffer-cb,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:lmp91000");
MODULE_ALIAS("i2c:lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91000");
MODULE_ALIAS("of:N*T*Cti,lmp91000C*");
MODULE_ALIAS("of:N*T*Cti,lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91002C*");

MODULE_INFO(srcversion, "0E7B3BE605B7F440D1AD5BE");
