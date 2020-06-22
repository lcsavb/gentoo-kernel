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
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0x3097baff, "__rtc_register_device" },
	{ 0xc9fc1392, "rtc_add_group" },
	{ 0xc8babb06, "devm_watchdog_register_device" },
	{ 0xf5efee6d, "devm_rtc_allocate_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x17475388, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");

MODULE_INFO(srcversion, "7765336F7F7AA39AD9B4E6F");
