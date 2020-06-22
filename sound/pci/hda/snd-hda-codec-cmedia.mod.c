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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xee4b9d4a, "snd_hda_gen_free" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x602b047, "snd_hda_codec_get_pincfg" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec");

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");

MODULE_INFO(srcversion, "7087F24B4371C6B15436909");
