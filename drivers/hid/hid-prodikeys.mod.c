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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xad0cba41, "input_event" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0xae359c03, "__hid_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x9166fada, "strncpy" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x281a03c3, "snd_card_free_when_closed" },
	{ 0x285da2e0, "snd_card_disconnect" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");

MODULE_ALIAS("hid:b0003g*v0000041Ep00002801");

MODULE_INFO(srcversion, "71821144A693279B4A18E2F");
