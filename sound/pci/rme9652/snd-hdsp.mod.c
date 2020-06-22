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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xd3b8ee3, "snd_dma_alloc_pages" },
	{ 0x480b2926, "snd_pcm_hw_constraint_msbits" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x39bf9301, "_snd_pcm_hw_param_setempty" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x999e8297, "vfree" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x3f57233e, "snd_pcm_hw_constraint_list" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x919ee3b8, "snd_ctl_notify" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0x8f94189a, "snd_hwdep_new" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x94098ff8, "snd_interval_list" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x232b15df, "snd_pcm_hw_rule_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x3a50244, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x6c9eccc1, "snd_pcm_set_sync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0x59a41dad, "snd_rawmidi_transmit" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbdbafe14, "snd_rawmidi_transmit_empty" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd,snd-hwdep");

MODULE_ALIAS("pci:v000010EEd00003FC5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ECBB147B09A4C36B026DC3F");
