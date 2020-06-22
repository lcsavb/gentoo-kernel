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
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x1d67c06e, "pppox_compat_ioctl" },
	{ 0xa76afe49, "pppox_ioctl" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xc5272dc5, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb5664923, "dev_add_pack" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x9bd8d6e5, "register_pppox_proto" },
	{ 0xb6285377, "proto_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xb4af225e, "ppp_input" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0x1f249bfa, "dev_get_by_name_rcu" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa86f59b5, "ppp_register_net_channel" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0x95411990, "pskb_trim_rcsum_slow" },
	{ 0x67fc2ca7, "__sk_receive_skb" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xe031d0d3, "pppox_unbind_sock" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xd517f601, "seq_puts" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x44226a8, "release_sock" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x9676cbcd, "sock_wmalloc" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd5689792, "sock_init_data" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,ppp_generic");


MODULE_INFO(srcversion, "2F7BA4EEFCDDB34FDAAD1DC");
