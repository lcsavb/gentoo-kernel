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
	{ 0x58973956, "sock_no_recvmsg" },
	{ 0xef4d20bb, "sock_no_sendmsg" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x1d67c06e, "pppox_compat_ioctl" },
	{ 0xa76afe49, "pppox_ioctl" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0xede1db20, "gre_del_protocol" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x9bd8d6e5, "register_pppox_proto" },
	{ 0xb6285377, "proto_register" },
	{ 0x3dcce852, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x9443a32d, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x83b400e1, "__ip_select_ident" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xbd6c9927, "skb_set_owner_w" },
	{ 0x33ccf19b, "skb_realloc_headroom" },
	{ 0xb4af225e, "ppp_input" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xe031d0d3, "pppox_unbind_sock" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7d336e05, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x67fc2ca7, "__sk_receive_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x35f9e09e, "ppp_register_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa8efffaf, "sk_setup_caps" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x44226a8, "release_sock" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd5689792, "sock_init_data" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,gre,ppp_generic");


MODULE_INFO(srcversion, "BC4E562362A8D71FAA085DF");
