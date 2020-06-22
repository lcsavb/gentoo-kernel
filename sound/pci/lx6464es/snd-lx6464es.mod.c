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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x7ea3056, "snd_pcm_hw_constraint_step" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfc39e32f, "ioport_unmap" },
	{ 0x17475388, "_dev_warn" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x6c9eccc1, "snd_pcm_set_sync" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xaa16ff73, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000C001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000C002bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000C021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000C022bc*sc*i*");

MODULE_INFO(srcversion, "A741C574DF7DB25A8F791BD");
