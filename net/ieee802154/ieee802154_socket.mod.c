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
	{ 0xa199d3ff, "dev_load" },
	{ 0xd5689792, "sock_init_data" },
	{ 0xf0414b2c, "dev_getbyhwaddr_rcu" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1a281859, "pv_ops" },
	{ 0x96963f11, "sk_common_release" },
	{ 0x1cf6b6b3, "compat_sock_common_setsockopt" },
	{ 0x4836233, "sock_common_recvmsg" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7afeb543, "compat_sock_common_getsockopt" },
	{ 0xa105cde0, "ieee802154_hdr_pull" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x453da752, "sock_no_bind" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xab1c1d08, "sock_prot_inuse_add" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0xc5272dc5, "dev_remove_pack" },
	{ 0x98001cfc, "init_net" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0x4c9200f3, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6285377, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x8a91fbff, "sock_register" },
	{ 0xe00ab823, "dev_getfirstbyhwtype" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc7f8e552, "sock_alloc_send_skb" },
	{ 0xfa557459, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf76b971c, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x28f36dc, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb5664923, "dev_add_pack" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd27628af, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "070FD355343982AE1C48C2A");
