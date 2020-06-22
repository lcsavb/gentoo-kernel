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
	{ 0x773ce046, "snd_soc_dapm_kcontrol_widget" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x38642d7d, "pm_runtime_force_suspend" },
	{ 0xa921abc0, "hdac_get_device_id" },
	{ 0xf93e719a, "device_link_add" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0xc3b273d8, "snd_soc_dapm_get_enum_double" },
	{ 0x8f1a6a3a, "snd_hdac_ext_bus_get_link" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xc48a6c49, "snd_soc_add_card_controls" },
	{ 0x9d695531, "snd_hdac_ext_bus_link_put" },
	{ 0x9b9fa501, "snd_soc_dapm_info_pin_switch" },
	{ 0xd8740e4, "snd_soc_dapm_put_pin_switch" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x88d4678a, "pm_runtime_force_resume" },
	{ 0x562e468d, "snd_hdac_get_sub_nodes" },
	{ 0x9b3d1856, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe78b60a3, "snd_hda_ext_driver_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd5b4fb2a, "snd_pcm_hw_constraint_eld" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xee53370, "snd_hdac_check_power_state" },
	{ 0x2460707d, "snd_soc_info_enum_double" },
	{ 0xcd46fb3d, "snd_soc_dapm_add_routes" },
	{ 0xf5c91f38, "snd_pcm_hw_constraint_mask64" },
	{ 0x95844b4f, "snd_hda_ext_driver_register" },
	{ 0xdf88f748, "snd_hdac_display_power" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa4d82bfe, "snd_hdac_acomp_get_eld" },
	{ 0x4151bced, "dapm_kcontrol_get_value" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x94fb765e, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe923b6e, "snd_hdac_ext_bus_link_get" },
	{ 0xff4af080, "snd_hdac_register_chmap_ops" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa2b89662, "snd_hdac_read_parm_uncached" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0xc06178c6, "snd_hdac_acomp_register_notifier" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xaa94cec7, "snd_soc_dapm_get_pin_switch" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153b49e6, "_snd_hdac_read_parm" },
	{ 0xa886fd0, "devm_kstrdup" },
	{ 0x3ffef96b, "snd_soc_dapm_new_widgets" },
	{ 0x29e1e204, "hdmi_audio_infoframe_pack" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x100e7ce, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd285d79a, "snd_hdac_refresh_widgets" },
	{ 0x18b8face, "snd_hdac_query_supported_pcm" },
	{ 0x13ba4b94, "snd_soc_dapm_disable_pin" },
	{ 0xdf3ef7ae, "snd_soc_dapm_enable_pin" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0xddf42c47, "snd_hdac_channel_allocation" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4f5614b5, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x50def70c, "snd_hdac_add_chmap_ctls" },
	{ 0x15593782, "snd_hdac_sync_power_state" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d6fa6a4, "snd_hdac_get_connections" },
	{ 0x61721124, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm");

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Fr00100000a02*");

MODULE_INFO(srcversion, "EAF47CFFA87E94961FEC397");
