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
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x619e0c5, "snd_soc_put_volsw" },
	{ 0x554162d3, "snd_soc_get_volsw" },
	{ 0x8b5f6062, "snd_soc_put_volsw_range" },
	{ 0x62ab1b1e, "snd_soc_info_volsw_range" },
	{ 0xf5b5d5b2, "snd_soc_get_volsw_range" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x25cf6eba, "snd_soc_info_volsw" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "02A3F2DCC264F32B576C467");
