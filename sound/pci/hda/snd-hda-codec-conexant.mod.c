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
	{ 0x85adc103, "snd_hda_gen_fixup_micmute_led" },
	{ 0xee4b9d4a, "snd_hda_gen_free" },
	{ 0xb3fd1bc5, "snd_hda_codec_get_pin_target" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0xec932cbd, "snd_hda_add_verbs" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0x1677d57, "snd_hda_pick_fixup" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x22410c6, "snd_hda_gen_update_outputs" },
	{ 0x9734b74, "snd_hda_get_path_from_idx" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0xbac7776, "snd_hdac_regmap_write_raw" },
	{ 0x147c9e05, "snd_hda_gen_check_power_status" },
	{ 0x1c6e982b, "snd_hda_codec_set_pin_target" },
	{ 0xf16d6fa3, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x1235958, "snd_hda_gen_add_micmute_led" },
	{ 0x66572f3b, "snd_hda_activate_path" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xafc4bea8, "snd_hda_jack_set_gating_jack" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0xeb4277a, "snd_hda_jack_detect_state" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0xeb32fbde, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x26706e74, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x1d3d49f3, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0xa4f0dfaf, "snd_hda_add_new_path" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0x9ba42679, "snd_hdac_regmap_read_raw" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x47cc3d9c, "query_amp_caps" },
	{ 0x51ffd141, "snd_hda_gen_mic_autoswitch" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
	{ 0x1b8eb63c, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v14F11F86r*a01*");
MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "589AF1B095C8D19C16214F4");
