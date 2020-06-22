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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c5d485f, "snd_ac97_read" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc0f65107, "snd_ak4114_resume" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7ea3056, "snd_pcm_hw_constraint_step" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xa8f09ef8, "snd_i2c_device_create" },
	{ 0x480b2926, "snd_pcm_hw_constraint_msbits" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xda1b6cb9, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x4d0f22d0, "snd_ak4113_create" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0x8297ab69, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d5b1280, "snd_ak4113_external_rate" },
	{ 0x2a09c464, "snd_ak4113_build" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbab52871, "snd_pt2258_build_controls" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xb2c3188a, "snd_ctl_boolean_stereo_info" },
	{ 0x919ee3b8, "snd_ctl_notify" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xee8d589a, "snd_akm4xxx_reset" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x95547305, "snd_ak4114_build" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x91f73a18, "snd_pt2258_reset" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc52facdd, "snd_ac97_suspend" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x4b21e4da, "snd_ice1712_akm4xxx_free" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x9504380a, "snd_i2c_bus_create" },
	{ 0x61e6be4f, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x6c9eccc1, "snd_pcm_set_sync" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x6cb2b47e, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x52f7e552, "snd_ac97_bus" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7197c052, "snd_ak4114_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcfe699ba, "snd_ac97_mixer" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0x32583d19, "snd_ak4114_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x8218dc21, "snd_ak4114_external_rate" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x30a01d28, "snd_ak4114_reinit" },
	{ 0x7750b8dd, "snd_akm4xxx_write" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xe4f3c11c, "snd_ac97_resume" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0x3141fdbd, "snd_ac97_write_cache" },
	{ 0x59a41dad, "snd_rawmidi_transmit" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xbdbafe14, "snd_rawmidi_transmit_empty" },
	{ 0x9c8834ae, "snd_ice1712_akm4xxx_init" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda");

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBF2F8CDAF6BDBA4C60072A");
