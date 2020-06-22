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
	{ 0x4663149b, "snd_soc_pm_ops" },
	{ 0x9b9fa501, "snd_soc_dapm_info_pin_switch" },
	{ 0xd8740e4, "snd_soc_dapm_put_pin_switch" },
	{ 0x6bb2d555, "snd_soc_dai_set_pll" },
	{ 0x88f14683, "rt5645_set_jack_detect" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xaa94cec7, "snd_soc_dapm_get_pin_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc66b3b2, "snd_soc_dai_set_sysclk" },
	{ 0x8e1f7030, "snd_soc_card_jack_new" },
	{ 0x8c804ab8, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5645");

MODULE_ALIAS("acpi*:AMDI1002:*");

MODULE_INFO(srcversion, "1603D57A51646C7EB39DE46");
