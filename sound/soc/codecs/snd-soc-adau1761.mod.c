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
	{ 0x31603c40, "adau17x1_precious_register" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0xe7351fd9, "snd_soc_dapm_get_volsw" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xc569b41e, "adau17x1_add_widgets" },
	{ 0xa7d49c6e, "adau17x1_resume" },
	{ 0x9b3d1856, "snd_soc_dapm_new_controls" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0xcd46fb3d, "snd_soc_dapm_add_routes" },
	{ 0x37984640, "snd_soc_add_component_controls" },
	{ 0x718ad758, "adau17x1_probe" },
	{ 0x493d0608, "snd_soc_dapm_put_volsw" },
	{ 0xd40b57e6, "adau17x1_volatile_register" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xcf3f6dea, "adau17x1_dai_ops" },
	{ 0x21482e3b, "snd_soc_get_enum_double" },
	{ 0x902fefa, "adau17x1_readable_register" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5fa29beb, "snd_soc_put_enum_double" },
	{ 0x56d5c9c1, "adau17x1_add_routes" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0xd326faaf, "regcache_cache_only" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-adau17x1,snd-soc-core");


MODULE_INFO(srcversion, "3BE60EF996A73FA0FEB2F6C");
