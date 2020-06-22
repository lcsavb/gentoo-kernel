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
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0xe863b929, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbe472234, "fw_iso_resources_update" },
	{ 0xccfbeafd, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x86915dc9, "fw_send_request" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x480b2926, "snd_pcm_hw_constraint_msbits" },
	{ 0x8634813b, "snd_info_create_card_entry" },
	{ 0xa533042d, "fw_iso_resources_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x353d3abf, "fw_bus_type" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c1e2c9, "snd_rawmidi_set_ops" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9257688e, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe4c017d, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xecd2b3bc, "amdtp_domain_add_stream" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xb571e2ed, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x78b5797b, "snd_rawmidi_transmit_peek" },
	{ 0x8f94189a, "snd_hwdep_new" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x4e921506, "fw_iso_resources_destroy" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x46710c0f, "snd_rawmidi_transmit_ack" },
	{ 0xa916b694, "strnlen" },
	{ 0x94bd2068, "put_device" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3690fce1, "amdtp_stream_pcm_prepare" },
	{ 0x84d83c1d, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6c9eccc1, "snd_pcm_set_sync" },
	{ 0xf1294315, "fw_iso_resources_allocate" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x82a7245b, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc9d1684e, "fw_core_remove_address_handler" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x76ddb850, "amdtp_stream_pcm_abort" },
	{ 0xf0e6e04c, "amdtp_stream_set_parameters" },
	{ 0x63823474, "amdtp_stream_init" },
	{ 0x3e09ff3, "snd_fw_schedule_registration" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x3f70a7d7, "amdtp_stream_add_pcm_hw_constraints" },
	{ 0x9a001563, "snd_pcm_limit_hw_rates" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xc2906c44, "snd_fw_transaction" },
	{ 0x6693e048, "fw_iso_resources_free" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbdbafe14, "snd_rawmidi_transmit_empty" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x60c44378, "fw_send_response" },
};

MODULE_INFO(depends, "snd-firewire-lib,firewire-core,snd-pcm,snd,snd-rawmidi,snd-hwdep");

MODULE_ALIAS("ieee1394:ven0000022Emo*sp0000022Ever*");

MODULE_INFO(srcversion, "60EB18D9701059B29D65281");
