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
	{ 0x50877b9, "dmi_first_match" },
	{ 0xe34769c9, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf84e654a, "snd_soc_dapm_info_pin_switch" },
	{ 0x317a6f1d, "snd_soc_dapm_put_pin_switch" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xde268dbf, "ts3a227e_enable_jack_detect" },
	{ 0x25eff209, "__platform_driver_register" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x8e4c37ac, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb1e70c1d, "snd_soc_jack_notifier_register" },
	{ 0x3418541e, "snd_soc_dapm_get_pin_switch" },
	{ 0x3bc4aff4, "devm_kstrdup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc979ecab, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe6c141a1, "devm_clk_get" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0x837aae09, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xce144094, "snd_soc_card_jack_new" },
	{ 0xea59d294, "snd_soc_dapm_force_enable_pin" },
	{ 0x431442c1, "snd_soc_dapm_disable_pin" },
	{ 0x59ca48c0, "snd_soc_dai_set_fmt" },
	{ 0x6e86b4c0, "snd_pcm_hw_constraint_minmax" },
	{ 0x62547ba2, "snd_soc_dai_set_tdm_slot" },
	{ 0x445fc237, "platform_driver_unregister" },
	{ 0x67152b70, "devm_kmalloc" },
	{ 0xab014b7, "snd_soc_jack_add_gpiods" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-ts3a227e,snd-pcm");


MODULE_INFO(srcversion, "2FC62E3206678C2F0CE5A1B");
