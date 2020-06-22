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
	{ 0xefbd2a4c, "l2tp_session_free" },
	{ 0xf4a8d227, "ip_getsockopt" },
	{ 0xc3ff73f, "inet_unhash" },
	{ 0xe8669532, "ip_setsockopt" },
	{ 0xa8efffaf, "sk_setup_caps" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x772fddc0, "l2tp_recv_common" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0xb8a42e68, "inet_sendmsg" },
	{ 0xa3ef7042, "inet_del_protocol" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x96963f11, "sk_common_release" },
	{ 0x1cf6b6b3, "compat_sock_common_setsockopt" },
	{ 0x1faa92cb, "inet_dgram_connect" },
	{ 0x4836233, "sock_common_recvmsg" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x7afeb543, "compat_sock_common_getsockopt" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x2ab886fa, "compat_ip_getsockopt" },
	{ 0xda8c8a11, "__sock_recv_wifi_status" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0xb020be4b, "inet_addr_type" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x23faff44, "__ip_queue_xmit" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xde91b8d7, "inet_shutdown" },
	{ 0xd30fb88d, "inet_add_protocol" },
	{ 0x44d02795, "__sock_recv_timestamp" },
	{ 0xa694cb0f, "inet_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x67fc2ca7, "__sk_receive_skb" },
	{ 0x69abe9b6, "inet_hash" },
	{ 0x1cc26a79, "ip_cmsg_recv_offset" },
	{ 0xb6285377, "proto_register" },
	{ 0xd6e00bf, "__sk_dst_check" },
	{ 0x9409facf, "inet_release" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1306e47e, "compat_ip_setsockopt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0xf76b971c, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xe8d041d7, "inet_register_protosw" },
	{ 0xdd4a461f, "__udp_disconnect" },
	{ 0x52565a3d, "l2tp_tunnel_delete" },
	{ 0x5543088e, "inet_bind" },
	{ 0x28f36dc, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xbf5f6ec, "__ip4_datagram_connect" },
	{ 0x9676cbcd, "sock_wmalloc" },
	{ 0x78acb65c, "l2tp_session_get" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x41c9e72f, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd27628af, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "622D28921A7BA417B5E0BCF");
