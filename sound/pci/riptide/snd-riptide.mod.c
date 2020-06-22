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
	{ 0xda36135, "pci_write_config_word" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0x4fee0870, "snd_opl3_hwdep_new" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xd8fd2ee9, "snd_mpu401_uart_new" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x1a281859, "pv_ops" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0x6350b32a, "snd_pcm_sgbuf_ops_page" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x9f9dea6a, "__gameport_register_port" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6367a71, "gameport_unregister_port" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x276220df, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v0000127Ad00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000127Ad00004340sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D694AC759FBB44A6C8BF7AD");
