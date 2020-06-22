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
	{ 0xc59e6a14, "snd_hdac_codec_read" },
	{ 0xbac7776, "snd_hdac_regmap_write_raw" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xf16d6fa3, "snd_hdac_regmap_add_vendor_verb" },
	{ 0xa81a3a6b, "__hda_codec_driver_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x67755b3e, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x72177101, "snd_hdac_codec_write" },
	{ 0xf4a669cb, "hda_codec_driver_unregister" },
	{ 0x48e2a29e, "snd_hda_codec_setup_stream" },
	{ 0x1b8eb63c, "snd_hda_add_new_ctls" },
};

MODULE_INFO(depends, "snd-hda-core,snd-pcm,snd-hda-codec,snd");

MODULE_ALIAS("hdaudio:v163C3055r*a01*");
MODULE_ALIAS("hdaudio:v163C3155r*a01*");
MODULE_ALIAS("hdaudio:v11C13026r*a01*");
MODULE_ALIAS("hdaudio:v11C13055r*a01*");
MODULE_ALIAS("hdaudio:v11C13155r*a01*");
MODULE_ALIAS("hdaudio:v10573055r*a01*");
MODULE_ALIAS("hdaudio:v10573057r*a01*");
MODULE_ALIAS("hdaudio:v10573155r*a01*");
MODULE_ALIAS("hdaudio:v11063288r*a01*");
MODULE_ALIAS("hdaudio:v15433155r*a01*");
MODULE_ALIAS("hdaudio:v18540018r*a01*");

MODULE_INFO(srcversion, "F4A5B6869CF44A723081AEE");
