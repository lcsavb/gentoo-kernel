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
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x1d67c06e, "pppox_compat_ioctl" },
	{ 0xa76afe49, "pppox_ioctl" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x453da752, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xce0cb311, "l2tp_nl_register_ops" },
	{ 0x9bd8d6e5, "register_pppox_proto" },
	{ 0xb6285377, "proto_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x99608c85, "l2tp_xmit_skb" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x9676cbcd, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xe031d0d3, "pppox_unbind_sock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x909251a2, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6d32e2ef, "l2tp_session_delete" },
	{ 0xa86f59b5, "ppp_register_net_channel" },
	{ 0x7d336e05, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeb3dd46e, "l2tp_tunnel_register" },
	{ 0xdb782633, "l2tp_tunnel_create" },
	{ 0x52565a3d, "l2tp_tunnel_delete" },
	{ 0x5a645fb, "l2tp_tunnel_get_session" },
	{ 0x36cf81c6, "l2tp_tunnel_get" },
	{ 0x44226a8, "release_sock" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xd517f601, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x8907672f, "ppp_dev_name" },
	{ 0x53cd2a94, "l2tp_session_get_nth" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xefbd2a4c, "l2tp_session_free" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x7f28e621, "l2tp_tunnel_free" },
	{ 0xc65b3dce, "l2tp_tunnel_get_nth" },
	{ 0xc5850110, "printk" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0xb4af225e, "ppp_input" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xafd99650, "l2tp_udp_encap_recv" },
	{ 0xd5689792, "sock_init_data" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8d843c6, "l2tp_session_register" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5cf8be39, "l2tp_session_create" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core,ppp_generic");


MODULE_INFO(srcversion, "50DD0EB8FFA2D8CD831B777");
