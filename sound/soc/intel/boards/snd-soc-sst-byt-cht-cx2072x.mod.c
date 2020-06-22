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
	{ 0xe34769c9, "devm_snd_soc_register_card" },
	{ 0xf84e654a, "snd_soc_dapm_info_pin_switch" },
	{ 0x317a6f1d, "snd_soc_dapm_put_pin_switch" },
	{ 0x25eff209, "__platform_driver_register" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x8e4c37ac, "devm_acpi_dev_add_driver_gpios" },
	{ 0xf812496b, "snd_soc_dai_set_bclk_ratio" },
	{ 0x3418541e, "snd_soc_dapm_get_pin_switch" },
	{ 0x89fee4e, "put_device" },
	{ 0x3bc4aff4, "devm_kstrdup" },
	{ 0xf685cd4b, "snd_soc_component_set_jack" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x837aae09, "snd_soc_dai_set_sysclk" },
	{ 0xce144094, "snd_soc_card_jack_new" },
	{ 0x59ca48c0, "snd_soc_dai_set_fmt" },
	{ 0x6e86b4c0, "snd_pcm_hw_constraint_minmax" },
	{ 0x62547ba2, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x445fc237, "platform_driver_unregister" },
	{ 0x3bdab2b5, "acpi_dev_get_first_match_dev" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm");


MODULE_INFO(srcversion, "79969FBE30FA84B31E92E1A");
