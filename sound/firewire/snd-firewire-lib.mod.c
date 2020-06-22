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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x9230b67a, "fw_iso_context_flush_completions" },
	{ 0xb1cee68b, "bpf_trace_run7" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x480b2926, "snd_pcm_hw_constraint_msbits" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x63900e92, "snd_pcm_stop_xrun" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83185323, "fw_iso_context_start" },
	{ 0x317d5c0, "fw_iso_context_queue_flush" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe3e99a3b, "fw_iso_resource_manage" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x86468d44, "fw_rcode_string" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xac51ef1f, "fw_iso_buffer_destroy" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x7d9ac42d, "fw_iso_context_queue" },
	{ 0x232b15df, "snd_pcm_hw_rule_add" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0x84d83c1d, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0xa2eb1cf5, "fw_iso_context_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc9d1684e, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d91377d, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0xaa16ff73, "snd_pcm_hw_constraint_minmax" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x59a41dad, "snd_rawmidi_transmit" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xa25f8b41, "fw_iso_buffer_init" },
	{ 0x8dd9ee12, "snd_rawmidi_receive" },
	{ 0x906d5355, "fw_run_transaction" },
	{ 0xcfb4a296, "trace_print_array_seq" },
	{ 0x9c7c8612, "fw_iso_context_destroy" },
};

MODULE_INFO(depends, "firewire-core,snd-pcm,snd-rawmidi");


MODULE_INFO(srcversion, "D1FF7CE3261F2165CEECD8F");
