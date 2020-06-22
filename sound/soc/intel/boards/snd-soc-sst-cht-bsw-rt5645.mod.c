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
	{ 0xe34769c9, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf84e654a, "snd_soc_dapm_info_pin_switch" },
	{ 0x317a6f1d, "snd_soc_dapm_put_pin_switch" },
	{ 0xd6853d2c, "snd_soc_dai_set_pll" },
	{ 0xb594e69b, "rt5645_set_jack_detect" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x25eff209, "__platform_driver_register" },
	{ 0xa99c0f86, "snd_soc_dapm_add_routes" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5a921311, "strncmp" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x3418541e, "snd_soc_dapm_get_pin_switch" },
	{ 0xb1051c6f, "rt5645_sel_asrc_clk_src" },
	{ 0x72f697fa, "_dev_info" },
	{ 0x89fee4e, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3bc4aff4, "devm_kstrdup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6c141a1, "devm_clk_get" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0x837aae09, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xce144094, "snd_soc_card_jack_new" },
	{ 0x59ca48c0, "snd_soc_dai_set_fmt" },
	{ 0x6e86b4c0, "snd_pcm_hw_constraint_minmax" },
	{ 0x62547ba2, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x445fc237, "platform_driver_unregister" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x6c5d2bcd, "snd_soc_acpi_find_package_from_hid" },
	{ 0x3bdab2b5, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5645,snd-pcm,snd-soc-acpi");


MODULE_INFO(srcversion, "B7A89B4446CABB915E39AB9");
