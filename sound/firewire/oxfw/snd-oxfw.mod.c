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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe863b929, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x86915dc9, "fw_send_request" },
	{ 0x81188c30, "match_string" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0xcc03cde, "avc_general_set_sig_fmt" },
	{ 0x8634813b, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x353d3abf, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4aeebfb4, "cmp_connection_destroy" },
	{ 0x3ac33e89, "fcp_avc_transaction" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x6e84d685, "avc_general_get_plug_info" },
	{ 0xe4c017d, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x9ba07012, "cmp_connection_establish" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xecd2b3bc, "amdtp_domain_add_stream" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xb571e2ed, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f94189a, "snd_hwdep_new" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x94098ff8, "snd_interval_list" },
	{ 0x13857afb, "devm_kmemdup" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x232b15df, "snd_pcm_hw_rule_add" },
	{ 0x94bd2068, "put_device" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3690fce1, "amdtp_stream_pcm_prepare" },
	{ 0x84d83c1d, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c9eccc1, "snd_pcm_set_sync" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x82a7245b, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc9d1684e, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x76ddb850, "amdtp_stream_pcm_abort" },
	{ 0xd575fd03, "fcp_bus_reset" },
	{ 0x4a6598e9, "cmp_connection_break" },
	{ 0x153e7455, "cmp_connection_init" },
	{ 0x3e09ff3, "snd_fw_schedule_registration" },
	{ 0x646a8b52, "amdtp_am824_add_pcm_hw_constraints" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x1f2a0952, "amdtp_am824_init" },
	{ 0x19347fcd, "cmp_connection_release" },
	{ 0x53ca18e8, "amdtp_rate_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9f2fa896, "amdtp_am824_midi_trigger" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7fa2be08, "cmp_connection_check_used" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0xc2906c44, "snd_fw_transaction" },
	{ 0x59a41dad, "snd_rawmidi_transmit" },
	{ 0xa28bdf46, "amdtp_am824_set_parameters" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x81cd02d4, "cmp_connection_reserve" },
	{ 0xe914e41e, "strcpy" },
	{ 0x60c44378, "fw_send_response" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven00001292mo0000F970sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000D04Bmo0000F970sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001564mo0000FC22sp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo*sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000022Emo00800007sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00001000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00002000sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo0001DDDDsp*ver*");

MODULE_INFO(srcversion, "111F5B9BA8B9B9534347D1C");
