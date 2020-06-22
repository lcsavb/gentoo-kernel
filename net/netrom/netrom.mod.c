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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0x44226a8, "release_sock" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd5689792, "sock_init_data" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0x70ab7ef, "skb_append" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x79652523, "send_sig" },
	{ 0x8138635d, "sk_stop_timer" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0xd517f601, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a0d77a, "ax25_linkfail_release" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbd6c9927, "skb_set_owner_w" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd95d54e4, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x1b7b2a8c, "sock_efree" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xe72bb348, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xdc7a061f, "ax25_send_frame" },
	{ 0xb6285377, "proto_register" },
	{ 0x2d96fde9, "sk_reset_timer" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x8a91fbff, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc7f8e552, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x1d40d888, "ax25_listen_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0x2a9b4378, "register_net_sysctl" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0xcd8cc69d, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd27628af, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "61D8A91EB30CDB6064AB91B");
