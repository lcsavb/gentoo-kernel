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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x9a1dfd65, "strpbrk" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x5730de25, "snd_hda_codec_prepare" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x8f1a6a3a, "snd_hdac_ext_bus_get_link" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x31c08f3b, "snd_hda_codec_device_new" },
	{ 0x9d695531, "snd_hdac_ext_bus_link_put" },
	{ 0x4329d5f8, "snd_hda_codec_parse_pcms" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x82443d57, "snd_hda_codec_set_name" },
	{ 0xfe923b6e, "snd_hdac_ext_bus_link_get" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf388b3a2, "snd_hda_codec_pcm_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89c5b77e, "snd_hda_codec_cleanup" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8d51dc3e, "snd_hda_codec_build_controls" },
	{ 0x9245518a, "snd_hdac_regmap_init" },
};

MODULE_INFO(depends, "snd-hda-codec,snd-hda-ext-core,snd-hda-core,snd-soc-core");


MODULE_INFO(srcversion, "9AC4E62671FEA3708D0FE16");
