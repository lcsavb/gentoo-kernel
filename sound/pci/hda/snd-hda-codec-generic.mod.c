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
	{ 0xb3fd1bc5, "snd_hda_codec_get_pin_target" },
	{ 0x349cba85, "strchr" },
	{ 0x4482b41c, "snd_hda_multi_out_dig_prepare" },
	{ 0x375cacd5, "snd_hda_input_mux_info" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0x1edaab0e, "snd_hda_get_default_vref" },
	{ 0x370ce718, "snd_hda_enum_helper_info" },
	{ 0x8f6f88c5, "snd_hda_apply_fixup" },
	{ 0x2d351390, "snd_hda_sync_vmaster_hook" },
	{ 0x67e7ec22, "snd_hda_codec_amp_stereo" },
	{ 0x8e103900, "__snd_hda_add_vmaster" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0x97ad3b10, "snd_hda_jack_add_kctls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x676f5ac, "snd_hda_get_input_pin_attr" },
	{ 0xb1750575, "snd_hda_check_amp_list_power" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe118de5d, "snd_pcm_2_1_chmaps" },
	{ 0xe9176bc3, "snd_hda_mixer_amp_switch_put" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf074ec0c, "snd_hda_jack_detect_enable_callback" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xbe084a2c, "snd_hda_check_amp_caps" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0xbac7776, "snd_hdac_regmap_write_raw" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe16c6ff0, "_snd_hda_set_pin_ctl" },
	{ 0xbbfdca1, "snd_hda_attach_beep_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1c6e982b, "snd_hda_codec_set_pin_target" },
	{ 0x31eedc16, "snd_hda_mixer_amp_switch_get" },
	{ 0x3a60ad3e, "snd_hda_codec_set_power_to_all" },
	{ 0x5260aeb7, "snd_hda_get_conn_list" },
	{ 0xb2c3188a, "snd_ctl_boolean_stereo_info" },
	{ 0x2ead29c, "snd_hda_multi_out_analog_prepare" },
	{ 0xb63a3384, "snd_hda_multi_out_analog_cleanup" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe10c00e3, "is_jack_detectable" },
	{ 0xf2b85272, "snd_hda_create_spdif_in_ctls" },
	{ 0xab39ccb9, "snd_hda_codec_amp_init" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xe3a53f4c, "sort" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4259e778, "snd_hda_get_int_hint" },
	{ 0xeb4277a, "snd_hda_jack_detect_state" },
	{ 0xef5c530d, "snd_hda_jack_tbl_get" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xffd28f12, "snd_hda_find_mixer_ctl" },
	{ 0x55fd4b21, "snd_hda_create_spdif_share_sw" },
	{ 0x398df1d7, "snd_hda_get_bool_hint" },
	{ 0xb5f8bbfa, "snd_hda_multi_out_analog_open" },
	{ 0x75ef7b05, "snd_hda_get_conn_index" },
	{ 0xd6bd2079, "snd_hda_multi_out_dig_close" },
	{ 0xd9614f3c, "snd_hda_create_dig_out_ctls" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0xc7e8c14b, "snd_hda_correct_pin_ctl" },
	{ 0x43553cbb, "snd_hda_add_imux_item" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9d112175, "snd_hda_get_pin_label" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x732fafce, "snd_hda_multi_out_dig_cleanup" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8c059fd, "snd_ctl_sync_vmaster" },
	{ 0xeb52830, "__snd_hda_codec_cleanup_stream" },
	{ 0x67755b3e, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x66d8e844, "snd_hda_add_vmaster_hook" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff091c36, "snd_hda_multi_out_dig_open" },
	{ 0x3bd45b0d, "ledtrig_audio_set" },
	{ 0x96848186, "scnprintf" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x602b047, "snd_hda_codec_get_pincfg" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0x48e2a29e, "snd_hda_codec_setup_stream" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x47cc3d9c, "query_amp_caps" },
	{ 0x976a215e, "hda_get_autocfg_input_label" },
	{ 0xca8c92f9, "regcache_sync" },
	{ 0x1fb398ae, "snd_hda_set_vmaster_tlv" },
	{ 0xc0313cdb, "snd_hda_codec_amp_init_stereo" },
	{ 0xc9780829, "snd_hda_get_connections" },
	{ 0x1b8eb63c, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbccc6e72, "snd_hda_codec_amp_update" },
	{ 0xfb580038, "snd_hda_apply_verbs" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-core,snd,ledtrig-audio");

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "838DA660D3805C720C2BFCC");
