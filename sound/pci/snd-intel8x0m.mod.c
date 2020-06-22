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
	{ 0x644ca00f, "snd_ac97_write" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0xf10de535, "ioread8" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-ac97-codec,snd-pcm,snd");

MODULE_ALIAS("pci:v00008086d00002416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002426sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002486sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000069sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000089sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E6CA5D12537227981D9EA5");
