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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x81188c30, "match_string" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc61bd85, "snd_soc_component_update_bits" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x37984640, "snd_soc_add_component_controls" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xc4e3ce72, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xeca0e8, "regcache_mark_dirty" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x37a0cba, "kfree" },
	{ 0xa6067dde, "snd_soc_component_read32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,regmap-i2c");

MODULE_ALIAS("i2c:max98088");
MODULE_ALIAS("i2c:max98089");

MODULE_INFO(srcversion, "72924BD4E78467B995A59A2");
