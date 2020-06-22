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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x644ca00f, "snd_ac97_write" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x41d8e826, "snd_pci_quirk_lookup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xad0cba41, "input_event" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd");

MODULE_ALIAS("pci:v0000125Dd00001988sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001989sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001990sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001992sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001998sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001999sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Asv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Bsv*sd*bc04sc01i*");

MODULE_INFO(srcversion, "6E5B8EDA17A98F087FA61AE");
