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
	{ 0x12a38747, "usleep_range" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0xf1511845, "regmap_bulk_read" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x88a9d99b, "devm_clk_hw_register" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Csilabs,si544a");
MODULE_ALIAS("of:N*T*Csilabs,si544aC*");
MODULE_ALIAS("of:N*T*Csilabs,si544b");
MODULE_ALIAS("of:N*T*Csilabs,si544bC*");
MODULE_ALIAS("of:N*T*Csilabs,si544c");
MODULE_ALIAS("of:N*T*Csilabs,si544cC*");
MODULE_ALIAS("i2c:si544a");
MODULE_ALIAS("i2c:si544b");
MODULE_ALIAS("i2c:si544c");

MODULE_INFO(srcversion, "F439273CF9FE972437F880C");
