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
	{ 0xe7d7698, "driver_unregister" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xcebe7641, "spi_setup" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x94fb2baf, "device_set_wakeup_capable" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x7c4974c4, "devm_rtc_device_register" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x17475388, "_dev_warn" },
	{ 0xb7e1e25d, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-spi,regmap-i2c");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "0C4A63875213CDA8BDEC6BF");
