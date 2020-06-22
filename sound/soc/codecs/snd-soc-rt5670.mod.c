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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x72ec8ef6, "__pm_runtime_idle" },
	{ 0xeaeb52d5, "__pm_runtime_disable" },
	{ 0x9cf22694, "snd_soc_dapm_get_enum_double" },
	{ 0xb3fc5440, "regmap_register_patch" },
	{ 0xe2ba3ef4, "i2c_del_driver" },
	{ 0xa1ff7a89, "snd_soc_dapm_get_volsw" },
	{ 0xbbf830a3, "regmap_update_bits_base" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3ce4592c, "snd_soc_dapm_new_controls" },
	{ 0xba47929c, "snd_soc_component_update_bits" },
	{ 0x7b95f686, "snd_soc_put_volsw" },
	{ 0xd1c3ff95, "regmap_read" },
	{ 0xa2e66d6e, "snd_soc_get_volsw" },
	{ 0xa8eede90, "snd_soc_info_enum_double" },
	{ 0xa99c0f86, "snd_soc_dapm_add_routes" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0xde144067, "snd_soc_dapm_put_volsw" },
	{ 0xc624e30e, "_dev_err" },
	{ 0xfedbd12f, "snd_soc_info_volsw" },
	{ 0xb7899e03, "i2c_register_driver" },
	{ 0x72f697fa, "_dev_info" },
	{ 0x89151a22, "snd_soc_get_enum_double" },
	{ 0x516fa2b5, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa30dcdd, "__devm_regmap_init_i2c" },
	{ 0x11e443df, "devm_snd_soc_register_component" },
	{ 0xc979ecab, "snd_soc_dapm_sync" },
	{ 0x958bb5c0, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x50645846, "regcache_mark_dirty" },
	{ 0x2e069401, "snd_soc_put_enum_double" },
	{ 0xea59d294, "snd_soc_dapm_force_enable_pin" },
	{ 0x431442c1, "snd_soc_dapm_disable_pin" },
	{ 0x45c5e5e3, "snd_soc_jack_add_gpios" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0x1b9c389, "snd_soc_component_read32" },
	{ 0x2b9dd8ac, "snd_soc_jack_free_gpios" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0xd96e1c6, "param_ops_uint" },
	{ 0x735678de, "regmap_write" },
	{ 0x1e2e9a91, "regcache_sync" },
	{ 0x6617ba12, "regcache_cache_only" },
	{ 0x5fe1515, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,i2c-core,snd-soc-rl6231,regmap-i2c");

MODULE_ALIAS("i2c:rt5670");
MODULE_ALIAS("i2c:rt5671");
MODULE_ALIAS("i2c:rt5672");
MODULE_ALIAS("acpi*:10EC5670:*");
MODULE_ALIAS("acpi*:10EC5672:*");
MODULE_ALIAS("acpi*:10EC5640:*");

MODULE_INFO(srcversion, "B1240D157297C06FF456C2B");
