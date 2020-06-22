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
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0x1677d57, "snd_hda_pick_fixup" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x17707117, "snd_hda_codec_set_pincfg" },
	{ 0x22410c6, "snd_hda_gen_update_outputs" },
	{ 0xf074ec0c, "snd_hda_jack_detect_enable_callback" },
	{ 0xe16c6ff0, "_snd_hda_set_pin_ctl" },
	{ 0x7df9fa7, "snd_hda_gen_fix_pin_power" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0xeb4277a, "snd_hda_jack_detect_state" },
	{ 0xffd28f12, "snd_hda_find_mixer_ctl" },
	{ 0xde620a2d, "snd_hda_sequence_write" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0x602b047, "snd_hda_codec_get_pincfg" },
	{ 0x9d1f6085, "snd_hda_apply_pincfgs" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0x47cc3d9c, "query_amp_caps" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
	{ 0x84b71fb, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-core,snd-hda-codec");

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "6B94A8679D74439592D8D29");
