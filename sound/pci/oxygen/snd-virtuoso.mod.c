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
	{ 0xf9a482f9, "msleep" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xfbabfd18, "_dev_crit" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x4caad3cf, "oxygen_read16" },
	{ 0xb3f4a34e, "oxygen_pci_remove" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d2cf03c, "oxygen_write8_masked" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x1a281859, "pv_ops" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xe9d9c501, "oxygen_write16_masked" },
	{ 0xfc6fce1f, "oxygen_write_ac97_masked" },
	{ 0x919ee3b8, "snd_ctl_notify" },
	{ 0xf22b734f, "oxygen_write_spi" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3170cfee, "oxygen_pci_probe" },
	{ 0x4da02e33, "snd_jack_new" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x26bf186c, "oxygen_write16" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x20ea51e2, "snd_component_add" },
	{ 0x7ad312b0, "oxygen_read8" },
	{ 0x6cfb6b, "oxygen_reset_uart" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x6a0ac1f5, "oxygen_write_uart" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xc2ce2484, "oxygen_write_i2c" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x4aba7e1c, "oxygen_pci_pm" },
	{ 0x58f27f59, "oxygen_pci_shutdown" },
	{ 0x9f63a843, "snd_jack_report" },
	{ 0xce60c842, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-oxygen-lib,snd");

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "4E966709DD6CE78B2585E1F");
