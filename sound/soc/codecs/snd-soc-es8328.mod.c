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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xa4c42df9, "dev_get_regmap" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd");


MODULE_INFO(srcversion, "365D6B74206B84B7532566A");
