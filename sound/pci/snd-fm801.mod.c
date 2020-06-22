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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0x4fee0870, "snd_opl3_hwdep_new" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xd8fd2ee9, "snd_mpu401_uart_new" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0xdb5de084, "snd_tea575x_set_freq" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x276220df, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa44c77e1, "snd_tea575x_init" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb216a9e6, "snd_tea575x_exit" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x53ea696c, "snd_pcm_add_chmap_ctls" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,videodev,snd-mpu401-uart,snd,tea575x,snd-ac97-codec");

MODULE_ALIAS("pci:v00001319d00000801sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v00005213d00000510sv*sd*bc04sc01i*");

MODULE_INFO(srcversion, "3A77186062A4260077BE458");
