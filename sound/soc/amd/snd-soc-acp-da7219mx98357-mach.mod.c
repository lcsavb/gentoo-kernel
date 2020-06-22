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
	{ 0xa8e2ba24, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4663149b, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9b9fa501, "snd_soc_dapm_info_pin_switch" },
	{ 0xd8740e4, "snd_soc_dapm_put_pin_switch" },
	{ 0x6bb2d555, "snd_soc_dai_set_pll" },
	{ 0x34f2ab2a, "da7219_aad_jack_det" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xcba5b5b9, "snd_jack_set_key" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xaa94cec7, "snd_soc_dapm_get_pin_switch" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc66b3b2, "snd_soc_dai_set_sysclk" },
	{ 0x572c9830, "clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x8e1f7030, "snd_soc_card_jack_new" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa7b3b8cc, "devm_regulator_register" },
	{ 0xea74f232, "bt_uart_enable" },
	{ 0xfef1b5ca, "device_property_present" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-da7219,snd,acp_audio_dma");

MODULE_ALIAS("acpi*:AMD7219:*");

MODULE_INFO(srcversion, "628FA9BBE94B82ED08B6662");
