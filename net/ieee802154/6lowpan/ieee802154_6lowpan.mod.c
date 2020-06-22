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
	{ 0xe324f5ea, "neigh_lookup" },
	{ 0x5dfe5376, "inet_frag_kill" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7d336e05, "dst_release" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x1db6ecb8, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x1a281859, "pv_ops" },
	{ 0x6da99428, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x9601104, "inet_frag_find" },
	{ 0xd6ae7752, "inet_frag_reasm_prepare" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0x6b2cc335, "inet_frags_fini" },
	{ 0x31bf6f9b, "ieee802154_hdr_peek" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0xc5272dc5, "dev_remove_pack" },
	{ 0x783f5d80, "nd_tbl" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xccb73ceb, "lowpan_header_decompress" },
	{ 0x9b30f15, "fqdir_init" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x7049bff4, "inet_frag_reasm_finish" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x63c833f8, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x795f698f, "lowpan_unregister_netdevice" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x135a49ce, "ieee802154_hdr_peek_addrs" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xa4999e5a, "lowpan_register_netdevice" },
	{ 0x3981687, "inet_frags_init" },
	{ 0x241fe5e7, "inet_frag_queue_insert" },
	{ 0xb5664923, "dev_add_pack" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x2a9b4378, "register_net_sysctl" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154,ipv6");


MODULE_INFO(srcversion, "CA07D658CDB046FA03041C1");
