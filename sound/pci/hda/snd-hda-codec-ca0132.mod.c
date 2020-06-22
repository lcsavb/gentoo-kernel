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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x19a7e8c2, "snd_hda_codec_load_dsp_prepare" },
	{ 0x4482b41c, "snd_hda_multi_out_dig_prepare" },
	{ 0xab04654d, "snd_hda_mixer_amp_volume_put" },
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0x67e7ec22, "snd_hda_codec_amp_stereo" },
	{ 0x4de91f03, "snd_hda_codec_load_dsp_trigger" },
	{ 0x8e103900, "__snd_hda_add_vmaster" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x41d8e826, "snd_pci_quirk_lookup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x59d132d1, "snd_hda_mixer_amp_tlv" },
	{ 0x97ad3b10, "snd_hda_jack_add_kctls" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x675738ae, "snd_hda_jack_unsol_event" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe9176bc3, "snd_hda_mixer_amp_switch_put" },
	{ 0xf074ec0c, "snd_hda_jack_detect_enable_callback" },
	{ 0x17475388, "_dev_warn" },
	{ 0x73fdd298, "snd_hda_mixer_amp_volume_get" },
	{ 0x82443d57, "snd_hda_codec_set_name" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xe16c6ff0, "_snd_hda_set_pin_ctl" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31eedc16, "snd_hda_mixer_amp_switch_get" },
	{ 0x48200f15, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf2b85272, "snd_hda_create_spdif_in_ctls" },
	{ 0x204f1f6c, "snd_hda_parse_pin_defcfg" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6cce8bcd, "snd_hda_override_amp_caps" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xeb4277a, "snd_hda_jack_detect_state" },
	{ 0xef5c530d, "snd_hda_jack_tbl_get" },
	{ 0xde620a2d, "snd_hda_sequence_write" },
	{ 0x55fd4b21, "snd_hda_create_spdif_share_sw" },
	{ 0xf2179ce6, "snd_hda_ctl_add" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd6bd2079, "snd_hda_multi_out_dig_close" },
	{ 0xd9614f3c, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xfa2cd64f, "snd_hda_codec_update_widgets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x732fafce, "snd_hda_multi_out_dig_cleanup" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeb52830, "__snd_hda_codec_cleanup_stream" },
	{ 0x67755b3e, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xff091c36, "snd_hda_multi_out_dig_open" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x9d1f6085, "snd_hda_apply_pincfgs" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0xedeffea8, "snd_hda_mixer_amp_switch_info" },
	{ 0x53ea696c, "snd_pcm_add_chmap_ctls" },
	{ 0xde3d1bca, "snd_hdac_power_down" },
	{ 0x48e2a29e, "snd_hda_codec_setup_stream" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xba25f5bc, "snd_hda_codec_load_dsp_cleanup" },
	{ 0xaffcf026, "snd_hda_mixer_amp_volume_info" },
	{ 0x7957d13e, "snd_hda_jack_report_sync" },
	{ 0x1fb398ae, "snd_hda_set_vmaster_tlv" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x5688aaa, "snd_hdac_power_up_pm" },
	{ 0x1b8eb63c, "snd_hda_add_new_ctls" },
	{ 0xe914e41e, "strcpy" },
	{ 0xbccc6e72, "snd_hda_codec_amp_update" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-codec,snd,snd-pcm");

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "0C0D8B306C2A39D28EC79BF");
