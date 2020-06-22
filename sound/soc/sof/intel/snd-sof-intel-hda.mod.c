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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x123b60f4, "snd_hdac_acomp_exit" },
	{ 0xdf88f748, "snd_hdac_display_power" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x26cf3c40, "device_attach" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x5145bcac, "snd_hdac_i915_init" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd95e1d6c, "snd_hdac_ext_bus_device_init" },
	{ 0x200ae5c5, "snd_hdac_codec_modalias" },
	{ 0xfd0f3bfe, "snd_hdac_bus_get_response" },
	{ 0x9b387f71, "snd_hdac_bus_send_cmd" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-hda-core,snd-hda-ext-core");


MODULE_INFO(srcversion, "15EA91F34C7A4D82F36F56B");
