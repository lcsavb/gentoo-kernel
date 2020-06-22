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
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x44226a8, "release_sock" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xd5689792, "sock_init_data" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x4f826ac3, "strp_init" },
	{ 0x442d0e5f, "strp_unpause" },
	{ 0xf369e212, "csum_and_copy_from_iter_full" },
	{ 0xd517f601, "seq_puts" },
	{ 0xf872ee17, "strp_data_ready" },
	{ 0x771df2cc, "sock_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x574b8d87, "proc_create_net_single" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4375c9af, "sock_rfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc3f01f39, "skb_unlink" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1618c461, "sk_wait_data" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xe330bdc, "strp_check_rcv" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0xeb5d3698, "sk_stream_wait_memory" },
	{ 0xd550a5f1, "strp_done" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xaea55013, "__sk_mem_reclaim" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x7419e1ca, "fput" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xf5e85695, "bpf_prog_get_type_dev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xb6285377, "proto_register" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x3f145f71, "_copy_from_iter_full_nocache" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x2aa47f53, "kernel_sendpage" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x8a91fbff, "sock_register" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0xd01afb47, "sock_alloc_file" },
	{ 0xccb673a7, "sock_alloc" },
	{ 0x48bb21b7, "__sk_mem_schedule" },
	{ 0xc0a99c1a, "sk_stream_error" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x925c6a7a, "strp_stop" },
	{ 0x36a099f6, "__module_get" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xa640b16e, "skb_splice_bits" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x738e3221, "fd_install" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2f6a2d43, "sk_page_frag_refill" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x61f204df, "bpf_prog_put" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AA39BA77A31994E9EEAB809");
