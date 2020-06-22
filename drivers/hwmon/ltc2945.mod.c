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
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x81834404, "devm_hwmon_device_register_with_groups" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:ltc2945");

MODULE_INFO(srcversion, "07F5F1E63D33D58CB2A1018");
