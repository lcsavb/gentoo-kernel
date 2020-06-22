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
	{ 0xf9a482f9, "msleep" },
	{ 0xe34769c9, "devm_snd_soc_register_card" },
	{ 0xf84e654a, "snd_soc_dapm_info_pin_switch" },
	{ 0x317a6f1d, "snd_soc_dapm_put_pin_switch" },
	{ 0x38d1858b, "devm_gpiod_get" },
	{ 0xfd11cc29, "rt5677_sel_asrc_clk_src" },
	{ 0x25eff209, "__platform_driver_register" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x8e4c37ac, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb40ff91f, "sst_hsw_device_set_config" },
	{ 0xf56fe90, "snd_soc_rtdcom_lookup" },
	{ 0x3418541e, "snd_soc_dapm_get_pin_switch" },
	{ 0x3bc4aff4, "devm_kstrdup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x837aae09, "snd_soc_dai_set_sysclk" },
	{ 0xce144094, "snd_soc_card_jack_new" },
	{ 0xea59d294, "snd_soc_dapm_force_enable_pin" },
	{ 0x431442c1, "snd_soc_dapm_disable_pin" },
	{ 0x45c5e5e3, "snd_soc_jack_add_gpios" },
	{ 0x987b2558, "gpiod_set_value_cansleep" },
	{ 0x445fc237, "platform_driver_unregister" },
	{ 0x67152b70, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-rt5677,snd-soc-sst-haswell-pcm");


MODULE_INFO(srcversion, "E2D46FB6161D948C82DDD5D");
