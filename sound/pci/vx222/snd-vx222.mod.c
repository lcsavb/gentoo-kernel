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
	{ 0x9a120019, "snd_vx_resume" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x2813d770, "snd_vx_dsp_boot" },
	{ 0x59e22e34, "snd_vx_dsp_load" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd13fc932, "snd_vx_suspend" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xe77a1296, "snd_vx_create" },
	{ 0xf1f04d23, "snd_vx_irq_handler" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x226138b0, "snd_vx_threaded_irq_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x5f38df8f, "snd_vx_setup_firmware" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-vx-lib,snd");

MODULE_ALIAS("pci:v000010B5d00009050sv00001369sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001369sd*bc*sc*i*");

MODULE_INFO(srcversion, "824017C5CABE86654396631");
