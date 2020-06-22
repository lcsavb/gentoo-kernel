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
	{ 0x3d38ff95, "module_layout" },
	{ 0xe34769c9, "devm_snd_soc_register_card" },
	{ 0xba47929c, "snd_soc_component_update_bits" },
	{ 0x25eff209, "__platform_driver_register" },
	{ 0xc624e30e, "_dev_err" },
	{ 0xb40ff91f, "sst_hsw_device_set_config" },
	{ 0xf56fe90, "snd_soc_rtdcom_lookup" },
	{ 0x3bc4aff4, "devm_kstrdup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x837aae09, "snd_soc_dai_set_sysclk" },
	{ 0x445fc237, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-sst-haswell-pcm");


MODULE_INFO(srcversion, "FFAAF8A4FEFE000B56708BB");
