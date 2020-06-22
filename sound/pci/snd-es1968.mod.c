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
	{ 0x85bd1608, "__request_region" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x47d1b5de, "v4l2_device_unregister" },
	{ 0xd8fd2ee9, "snd_mpu401_uart_new" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa827e23, "v4l2_device_register" },
	{ 0xad0cba41, "input_event" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x14eb42d8, "snd_pcm_hw_constraint_pow2" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x9f9dea6a, "__gameport_register_port" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6367a71, "gameport_unregister_port" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x67b82017, "snd_dma_alloc_pages_fallback" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xa44c77e1, "snd_tea575x_init" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb216a9e6, "snd_tea575x_exit" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7e5f0e69, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xf443f897, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,videodev,snd-mpu401-uart,snd,gameport,snd-ac97-codec,tea575x");

MODULE_ALIAS("pci:v00001285d00000100sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001968sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001978sv*sd*bc04sc01i*");

MODULE_INFO(srcversion, "621A3CF6A5C6BA4C8E3B494");
