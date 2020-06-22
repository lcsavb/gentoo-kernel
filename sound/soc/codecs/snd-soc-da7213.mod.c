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
	{ 0x3d38ff95, "module_layout" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9cf22694, "snd_soc_dapm_get_enum_double" },
	{ 0xe2ba3ef4, "i2c_del_driver" },
	{ 0xa1ff7a89, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xba47929c, "snd_soc_component_update_bits" },
	{ 0x7b95f686, "snd_soc_put_volsw" },
	{ 0xa2e66d6e, "snd_soc_get_volsw" },
	{ 0xa8eede90, "snd_soc_info_enum_double" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0xb15f3f25, "device_property_read_string" },
	{ 0xde144067, "snd_soc_dapm_put_volsw" },
	{ 0xc624e30e, "_dev_err" },
	{ 0xfedbd12f, "snd_soc_info_volsw" },
	{ 0xb7899e03, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x89151a22, "snd_soc_get_enum_double" },
	{ 0xc8c5316a, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa30dcdd, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x11e443df, "devm_snd_soc_register_component" },
	{ 0x958bb5c0, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6c141a1, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x2e069401, "snd_soc_put_enum_double" },
	{ 0x1b9c389, "snd_soc_component_read32" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0x5fe1515, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("acpi*:DLGS7212:*");
MODULE_ALIAS("acpi*:DLGS7213:*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "2A3DB70CFB7C1C6ABEBD36B");
