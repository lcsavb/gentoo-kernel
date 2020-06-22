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
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xf4a0202f, "dev_pm_set_wake_irq" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x3097baff, "__rtc_register_device" },
	{ 0xf5efee6d, "devm_rtc_allocate_device" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0xcebe7641, "spi_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xb7e1e25d, "rtc_update_irq" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x61951821, "device_init_wakeup" },
	{ 0xde86d0ac, "dev_pm_clear_wake_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:ds1343");
MODULE_ALIAS("spi:ds1344");

MODULE_INFO(srcversion, "AB1A8A7627FCF702AC72682");
