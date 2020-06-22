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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xa2acdc8f, "kernel_write" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x754d539c, "strlen" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xd517f601, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x771df2cc, "sock_release" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x44e9a829, "match_token" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x85df9b6c, "strsep" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb48f44d8, "bpf_trace_run3" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd310388d, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfe42d23b, "kernel_read" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0x32d5f3e8, "from_kuid" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3441c7b7, "iov_iter_kvec" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0x61bbcd92, "from_kgid" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x954f099c, "idr_preload" },
	{ 0x3604f9e4, "kmem_cache_create_usercopy" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x4e3567f7, "match_int" },
	{ 0x7419e1ca, "fput" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x681e3cee, "module_put" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd01afb47, "sock_alloc_file" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4e01, "bpf_trace_run2" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0xb88c6bb6, "kernel_bind" },
	{ 0x8edd97ea, "fget" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb2b2c4c4, "iov_iter_advance" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb1b5ece7, "bpf_trace_run4" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe48af658, "__put_page" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x51aca36b, "__sock_create" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BEB810892CF06CB6634D7F2");
