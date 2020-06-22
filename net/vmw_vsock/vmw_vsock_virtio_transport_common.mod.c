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
	{ 0x44226a8, "release_sock" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xb4a093dd, "__vsock_create" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc79d5ef, "vm_sockets_get_local_cid" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbe1b0532, "vsock_stream_has_space" },
	{ 0x7d94ee01, "vsock_core_get_transport" },
	{ 0xb6fcdcb9, "bpf_trace_run10" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0xd5d18b70, "vsock_find_connected_socket" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x712e52f7, "current_task" },
	{ 0x9a18aae8, "vsock_stream_has_data" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x28fa8e3f, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x931494de, "bpf_trace_run8" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x561df4f2, "vsock_deliver_tap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x31498493, "vsock_remove_sock" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xbd2b4eef, "vsock_insert_connected" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2dda4450, "vsock_enqueue_accept" },
};

MODULE_INFO(depends, "vsock");


MODULE_INFO(srcversion, "2DEA9A7B850E4657F1A1DE1");
