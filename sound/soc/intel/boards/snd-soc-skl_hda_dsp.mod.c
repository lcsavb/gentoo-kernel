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
	{ 0xa8e2ba24, "devm_snd_soc_register_card" },
	{ 0x4663149b, "snd_soc_pm_ops" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5613e7e, "hdac_hdmi_jack_port_init" },
	{ 0x17475388, "_dev_warn" },
	{ 0x16d70555, "snd_jack_add_new_kctl" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8e1f7030, "snd_soc_card_jack_new" },
	{ 0xae8d89a5, "hdac_hdmi_jack_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-soc-hdac-hdmi,snd");


MODULE_INFO(srcversion, "6151EAE14A5AABCE605B4E0");
