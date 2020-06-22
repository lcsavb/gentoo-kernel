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
	{ 0x80e626de, "snd_sbdsp_create" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xa2985af0, "snd_sbdsp_reset" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4fee0870, "snd_opl3_hwdep_new" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xd8fd2ee9, "snd_mpu401_uart_new" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x96ffc9eb, "snd_sbmixer_suspend" },
	{ 0x4c189636, "snd_sbmixer_read" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x9f9dea6a, "__gameport_register_port" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6367a71, "gameport_unregister_port" },
	{ 0x4904cfec, "snd_sbmixer_new" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x276220df, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x596000fe, "snd_sbdsp_command" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x51ce617b, "snd_sbmixer_resume" },
	{ 0x7e5f0e69, "gameport_set_phys" },
	{ 0xbfc7ec75, "snd_sbmixer_write" },
};

MODULE_INFO(depends, "snd-sb-common,snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport");

MODULE_ALIAS("pci:v00004005d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "813AB9FA9029AB4A88965A6");
