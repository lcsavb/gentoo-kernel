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
	{ 0x44226a8, "release_sock" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd5689792, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0xd517f601, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xc5272dc5, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0x8ee8c681, "register_snap_client" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6285377, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x8a91fbff, "sock_register" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc7f8e552, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9c9fafe0, "__dev_get_by_name" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb6a1b0cd, "remove_proc_subtree" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x33f7540, "unregister_snap_client" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xb5664923, "dev_add_pack" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x2a9b4378, "register_net_sysctl" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x60a3cb24, "sock_i_uid" },
	{ 0x9c209302, "dev_mc_add_global" },
	{ 0xd27628af, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "6390D3CDE5E5E6D29E8EB8A");
