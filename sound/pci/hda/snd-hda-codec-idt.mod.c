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
	{ 0xa083a0f, "snd_hdac_power_up" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xee4b9d4a, "snd_hda_gen_free" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0x52fe4d26, "snd_hda_codec_eapd_power_filter" },
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0xec932cbd, "snd_hda_add_verbs" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0x1677d57, "snd_hda_pick_fixup" },
	{ 0x5ab92f8e, "snd_hda_input_mux_put" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x17707117, "snd_hda_codec_set_pincfg" },
	{ 0xe9176bc3, "snd_hda_mixer_amp_switch_put" },
	{ 0x22410c6, "snd_hda_gen_update_outputs" },
	{ 0xf074ec0c, "snd_hda_jack_detect_enable_callback" },
	{ 0x17475388, "_dev_warn" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0xbac7776, "snd_hdac_regmap_write_raw" },
	{ 0xe16c6ff0, "_snd_hda_set_pin_ctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7df9fa7, "snd_hda_gen_fix_pin_power" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x31eedc16, "snd_hda_mixer_amp_switch_get" },
	{ 0xf16d6fa3, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x1235958, "snd_hda_gen_add_micmute_led" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xb0cd3c00, "snd_hda_gen_path_power_filter" },
	{ 0xe10c00e3, "is_jack_detectable" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x4259e778, "snd_hda_get_int_hint" },
	{ 0xeb4277a, "snd_hda_jack_detect_state" },
	{ 0xef5c530d, "snd_hda_jack_tbl_get" },
	{ 0x398df1d7, "snd_hda_get_bool_hint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0x43553cbb, "snd_hda_add_imux_item" },
	{ 0xeb32fbde, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xea32aace, "snd_hda_enable_beep_device" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x1d3d49f3, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0x602b047, "snd_hda_codec_get_pincfg" },
	{ 0x9d1f6085, "snd_hda_apply_pincfgs" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0xde3d1bca, "snd_hdac_power_down" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x47cc3d9c, "query_amp_caps" },
	{ 0xc0313cdb, "snd_hda_codec_amp_init_stereo" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
	{ 0xc9780829, "snd_hda_get_connections" },
	{ 0x84b71fb, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847638r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");

MODULE_INFO(srcversion, "DD841D80F3342216ABA8EC2");
