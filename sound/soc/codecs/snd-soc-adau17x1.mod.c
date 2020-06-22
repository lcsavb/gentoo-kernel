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
	{ 0x815588a6, "clk_enable" },
	{ 0xd3d14848, "snd_soc_dapm_del_routes" },
	{ 0x7e590e18, "devm_sigmadsp_init_regmap" },
	{ 0x7355e4d0, "regmap_raw_write" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9b3d1856, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5279102e, "sigmadsp_attach" },
	{ 0xae620be9, "adau_calc_pll_cfg" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0x437e792c, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xcd46fb3d, "snd_soc_dapm_add_routes" },
	{ 0x17475388, "_dev_warn" },
	{ 0x37984640, "snd_soc_add_component_controls" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4f614d2, "sigmadsp_setup" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0x6ba69ea9, "sigmadsp_restrict_params" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x69acdf38, "memcpy" },
	{ 0x925ced6b, "snd_soc_component_test_bits" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe385905c, "snd_soc_dapm_mux_update_power" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-sigmadsp-regmap,snd-soc-sigmadsp,snd-soc-adau-utils");


MODULE_INFO(srcversion, "BC8B7DBEA3E9ECDAB434156");
