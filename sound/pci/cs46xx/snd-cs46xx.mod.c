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
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c5d485f, "snd_ac97_read" },
	{ 0x644ca00f, "snd_ac97_write" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x8634813b, "snd_info_create_card_entry" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x919ee3b8, "snd_ctl_notify" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x9f9dea6a, "__gameport_register_port" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x6367a71, "gameport_unregister_port" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x6cb2b47e, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0xa0e317e2, "snd_ac97_update_bits" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x38a3a131, "snd_info_free_entry" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0x3141fdbd, "snd_ac97_write_cache" },
	{ 0x59a41dad, "snd_rawmidi_transmit" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x7e5f0e69, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd,snd-rawmidi,gameport");

MODULE_ALIAS("pci:v00001013d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00006003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00006004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11FF4360F4C97088F132FB1");
