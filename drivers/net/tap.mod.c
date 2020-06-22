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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd5689792, "sock_init_data" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0xefd0154f, "iov_iter_npages" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa7e38f12, "flow_keys_basic_dissector" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x962af193, "__skb_flow_dissect" },
	{ 0x560e476a, "skb_copy_datagram_from_iter" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6528cd97, "sock_alloc_send_pskb" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfcb72f0b, "skb_partial_csum_set" },
	{ 0x1a281859, "pv_ops" },
	{ 0x95947206, "kfree_skb_list" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbc9e6657, "dev_set_mac_address" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x20bdcf69, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x28102011, "build_skb" },
	{ 0xb4446279, "cdev_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb2b2c4c4, "iov_iter_advance" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x88834701, "zerocopy_sg_from_iter" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7D231ADCC4540DF0A58F0EB");
