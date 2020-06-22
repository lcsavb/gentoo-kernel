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
	{ 0xf9a482f9, "msleep" },
	{ 0x85adc103, "snd_hda_gen_fixup_micmute_led" },
	{ 0xee4b9d4a, "snd_hda_gen_free" },
	{ 0xb3fd1bc5, "snd_hda_codec_get_pin_target" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0xa146680c, "snd_hda_gen_parse_auto_config" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0xec932cbd, "snd_hda_add_verbs" },
	{ 0x1677d57, "snd_hda_pick_fixup" },
	{ 0x41d8e826, "snd_pci_quirk_lookup" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdf9090f4, "snd_hda_gen_build_pcms" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0x8cedf170, "snd_hda_override_conn_list" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x17707117, "snd_hda_codec_set_pincfg" },
	{ 0xe9176bc3, "snd_hda_mixer_amp_switch_put" },
	{ 0x22410c6, "snd_hda_gen_update_outputs" },
	{ 0xf074ec0c, "snd_hda_jack_detect_enable_callback" },
	{ 0xad0cba41, "input_event" },
	{ 0x17475388, "_dev_warn" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0x82443d57, "snd_hda_codec_set_name" },
	{ 0xbac7776, "snd_hdac_regmap_write_raw" },
	{ 0xe16c6ff0, "_snd_hda_set_pin_ctl" },
	{ 0xf9ed0d0c, "snd_hda_gen_hp_automute" },
	{ 0x147c9e05, "snd_hda_gen_check_power_status" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1c6e982b, "snd_hda_codec_set_pin_target" },
	{ 0x6add5c9a, "dmi_find_device" },
	{ 0x31eedc16, "snd_hda_mixer_amp_switch_get" },
	{ 0x1235958, "snd_hda_gen_add_micmute_led" },
	{ 0x48200f15, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb0cd3c00, "snd_hda_gen_path_power_filter" },
	{ 0xe10c00e3, "is_jack_detectable" },
	{ 0xc935dd2f, "snd_hda_gen_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xafc4bea8, "snd_hda_jack_set_gating_jack" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0xeb4277a, "snd_hda_jack_detect_state" },
	{ 0xffd28f12, "snd_hda_find_mixer_ctl" },
	{ 0xde620a2d, "snd_hda_sequence_write" },
	{ 0x398df1d7, "snd_hda_get_bool_hint" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x69bce982, "snd_hdac_override_parm" },
	{ 0xc6e63bda, "snd_hda_pick_pin_fixup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0xeb32fbde, "snd_hda_mixer_amp_switch_put_beep" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x26706e74, "snd_hda_gen_reboot_notify" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa99c5968, "snd_hda_jack_add_kctl" },
	{ 0xea6d9b66, "snd_hda_gen_add_kctl" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x1d3d49f3, "snd_hda_mixer_amp_switch_get_beep" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0x602b047, "snd_hda_codec_get_pincfg" },
	{ 0x9d1f6085, "snd_hda_apply_pincfgs" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0x75918e4e, "snd_hda_gen_spec_init" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x47cc3d9c, "query_amp_caps" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0x67c38598, "snd_hda_gen_build_controls" },
	{ 0x5688aaa, "snd_hdac_power_up_pm" },
	{ 0xe914e41e, "strcpy" },
	{ 0xfb580038, "snd_hda_apply_verbs" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x84b71fb, "snd_hda_shutup_pins" },
};

MODULE_INFO(depends, "snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0222r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0245r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0623r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0711r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC0B00r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");

MODULE_INFO(srcversion, "488E546FEC76DC4A9AF0E3A");
