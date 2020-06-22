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
	{ 0xc3ff73f, "inet_unhash" },
	{ 0xc2ba2269, "inet6_hash" },
	{ 0xd59c05f0, "compat_ipv6_getsockopt" },
	{ 0x866de2b3, "compat_ipv6_setsockopt" },
	{ 0x36c0885c, "ipv6_getsockopt" },
	{ 0x9d6190b3, "ipv6_setsockopt" },
	{ 0x3a7b0047, "l2tp_ioctl" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x4836233, "sock_common_recvmsg" },
	{ 0xb8a42e68, "inet_sendmsg" },
	{ 0x7afeb543, "compat_sock_common_getsockopt" },
	{ 0x1cf6b6b3, "compat_sock_common_setsockopt" },
	{ 0x28f36dc, "sock_common_getsockopt" },
	{ 0xf76b971c, "sock_common_setsockopt" },
	{ 0xde91b8d7, "inet_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0x56813f79, "inet6_ioctl" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x1faa92cb, "inet_dgram_connect" },
	{ 0x1236ce2d, "inet6_bind" },
	{ 0xe74cd8a, "inet6_release" },
	{ 0x78fb1de2, "inet6_del_protocol" },
	{ 0x9afc4be0, "inet6_unregister_protosw" },
	{ 0x4c890400, "inet6_register_protosw" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x4cf1d4ab, "inet6_add_protocol" },
	{ 0xb6285377, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x67fc2ca7, "__sk_receive_skb" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xefbd2a4c, "l2tp_session_free" },
	{ 0x772fddc0, "l2tp_recv_common" },
	{ 0x78acb65c, "l2tp_session_get" },
	{ 0x75e4db05, "__fl6_sock_lookup" },
	{ 0x4ace5c85, "ip6_dst_hoplimit" },
	{ 0xc670dd1d, "ip6_push_pending_frames" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7d336e05, "dst_release" },
	{ 0x52aeecc5, "ip6_append_data" },
	{ 0xc8334e12, "ip_generic_getfrag" },
	{ 0xd72cda94, "ip6_dst_lookup_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x83b02653, "fl6_merge_options" },
	{ 0xe17d1e14, "ip6_datagram_send_ctl" },
	{ 0x96963f11, "sk_common_release" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x291d6e90, "ipv6_chk_addr" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xfaef9d73, "__ip6_datagram_connect" },
	{ 0xdd4a461f, "__udp_disconnect" },
	{ 0x7813f821, "inet6_destroy_sock" },
	{ 0x52565a3d, "l2tp_tunnel_delete" },
	{ 0x44226a8, "release_sock" },
	{ 0x74317f54, "ip6_flush_pending_frames" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xda8c8a11, "__sock_recv_wifi_status" },
	{ 0x5ec2ca15, "ip6_datagram_recv_ctl" },
	{ 0x44d02795, "__sock_recv_timestamp" },
	{ 0xbe325532, "ipv6_recv_error" },
	{ 0xd27628af, "skb_free_datagram" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipv6,l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "D523BB6B1965FB5D4D9EA9A");
