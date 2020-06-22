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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0xd30737d8, "devm_gpiochip_add_data" },
	{ 0x2cc813ee, "regmap_get_device" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0x95eb8d79, "i2c_match_id" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,i2c-mux,regmap-i2c");

MODULE_ALIAS("of:N*T*Clltc,ltc4305");
MODULE_ALIAS("of:N*T*Clltc,ltc4305C*");
MODULE_ALIAS("of:N*T*Clltc,ltc4306");
MODULE_ALIAS("of:N*T*Clltc,ltc4306C*");
MODULE_ALIAS("i2c:ltc4305");
MODULE_ALIAS("i2c:ltc4306");

MODULE_INFO(srcversion, "9858DE9A41FD8F55F27C7D5");
