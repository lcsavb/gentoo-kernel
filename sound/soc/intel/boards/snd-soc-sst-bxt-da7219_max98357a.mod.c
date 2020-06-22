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
	{ 0xa8e2ba24, "devm_snd_soc_register_card" },
	{ 0x480b2926, "snd_pcm_hw_constraint_msbits" },
	{ 0x4663149b, "snd_soc_pm_ops" },
	{ 0x9b9fa501, "snd_soc_dapm_info_pin_switch" },
	{ 0xd8740e4, "snd_soc_dapm_put_pin_switch" },
	{ 0x6bb2d555, "snd_soc_dai_set_pll" },
	{ 0x34f2ab2a, "da7219_aad_jack_det" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xcba5b5b9, "snd_jack_set_key" },
	{ 0xcd46fb3d, "snd_soc_dapm_add_routes" },
	{ 0x5613e7e, "hdac_hdmi_jack_port_init" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0x65bf96e1, "snd_soc_dapm_ignore_suspend" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xaa94cec7, "snd_soc_dapm_get_pin_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa886fd0, "devm_kstrdup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc66b3b2, "snd_soc_dai_set_sysclk" },
	{ 0x8e1f7030, "snd_soc_card_jack_new" },
	{ 0xae8d89a5, "hdac_hdmi_jack_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbec30d05, "x86_match_cpu" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-da7219,snd,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "BC2C08749747379044B6759");
