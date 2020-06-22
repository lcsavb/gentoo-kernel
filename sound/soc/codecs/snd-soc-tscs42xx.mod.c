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
	{ 0xf9a482f9, "msleep" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x5aa62c1e, "regmap_register_patch" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0xd455599a, "regmap_bulk_write" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf16a07e1, "snd_soc_bytes_info" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0xc8097cbe, "snd_soc_bytes_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x995b764e, "snd_soc_bytes_put" },
	{ 0xa6067dde, "snd_soc_component_read32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("of:N*T*Ctempo,tscs42A1");
MODULE_ALIAS("of:N*T*Ctempo,tscs42A1C*");
MODULE_ALIAS("of:N*T*Ctempo,tscs42A2");
MODULE_ALIAS("of:N*T*Ctempo,tscs42A2C*");
MODULE_ALIAS("i2c:tscs42A1");
MODULE_ALIAS("i2c:tscs42A2");

MODULE_INFO(srcversion, "F8E1DAC77ACFFAF2AA57A51");
