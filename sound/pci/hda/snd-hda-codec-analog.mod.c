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
	{ 0x370ce718, "snd_hda_enum_helper_info" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0x1677d57, "snd_hda_pick_fixup" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x8cedf170, "snd_hda_override_conn_list" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x9734b74, "snd_hda_get_path_from_idx" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0xbac7776, "snd_hdac_regmap_write_raw" },
	{ 0xd08ec52d, "snd_hda_get_path_idx" },
	{ 0x147c9e05, "snd_hda_gen_check_power_status" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x66572f3b, "snd_hda_activate_path" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0xf2179ce6, "snd_hda_ctl_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0xeb32fbde, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x1d3d49f3, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
	{ 0xc9780829, "snd_hda_get_connections" },
	{ 0x84b71fb, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");

MODULE_INFO(srcversion, "778511E90B65B43438098FA");
