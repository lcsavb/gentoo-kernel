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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x1912be44, "clk_hw_register_clkdev" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x63150e06, "clk_get_parent" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x65a5b8a4, "devm_clk_register" },
	{ 0xc5850110, "printk" },
	{ 0x37984640, "snd_soc_add_component_controls" },
	{ 0xa4c42df9, "dev_get_regmap" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2396c7f0, "clk_set_parent" },
	{ 0x1ce49d72, "devm_clk_bulk_get" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0x256446e8, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xa6067dde, "snd_soc_component_read32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "F3254F2A2C2A903DD1FAE0F");
