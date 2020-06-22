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
	{ 0x33ff0a74, "device_get_next_child_node" },
	{ 0x7e2998e7, "typec_set_pwr_role" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x7283bc83, "typec_unregister_altmode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6ddb10ad, "typec_register_port" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6bd55222, "bpf_trace_run1" },
	{ 0xda0a9c4c, "typec_unregister_port" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4ec6fbb2, "typec_altmode_vdm" },
	{ 0x5f2c6469, "typec_set_data_role" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa6f3d19, "typec_altmode_update_active" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x33fd62de, "typec_set_pwr_opmode" },
	{ 0x9cad8da6, "typec_unregister_partner" },
	{ 0xbc821c40, "typec_partner_register_altmode" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x68e4e01, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4b007ae8, "typec_altmode_get_partner" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x15968208, "typec_port_register_altmode" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9a00a11c, "typec_register_partner" },
	{ 0x51bd55b5, "completion_done" },
};

MODULE_INFO(depends, "typec");


MODULE_INFO(srcversion, "70343303D14F0FAA63C0BB6");
