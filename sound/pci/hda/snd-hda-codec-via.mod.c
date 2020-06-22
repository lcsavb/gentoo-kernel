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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee4b9d4a, "snd_hda_gen_free" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0x370ce718, "snd_hda_enum_helper_info" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0xec932cbd, "snd_hda_add_verbs" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0x1677d57, "snd_hda_pick_fixup" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x8cedf170, "snd_hda_override_conn_list" },
	{ 0xb1750575, "snd_hda_check_amp_list_power" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x17707117, "snd_hda_codec_set_pincfg" },
	{ 0xe9176bc3, "snd_hda_mixer_amp_switch_put" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0x82443d57, "snd_hda_codec_set_name" },
	{ 0x31eedc16, "snd_hda_mixer_amp_switch_get" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x398df1d7, "snd_hda_get_bool_hint" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0xeb32fbde, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x1d3d49f3, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0x602b047, "snd_hda_codec_get_pincfg" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0x9ba42679, "snd_hdac_regmap_read_raw" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
	{ 0xc9780829, "snd_hda_get_connections" },
	{ 0x84b71fb, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd");

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");

MODULE_INFO(srcversion, "F00431B5DBD2F9B46F1528E");
