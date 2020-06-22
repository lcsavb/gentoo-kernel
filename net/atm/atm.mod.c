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
	{ 0xa24f23d8, "__request_module" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd5689792, "sock_init_data" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x5d64097b, "proc_create_seq_private" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x79652523, "send_sig" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0xd517f601, "seq_puts" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7181db30, "atomic_notifier_chain_unregister" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd44f7a9f, "PDE_DATA" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x7533a30b, "device_del" },
	{ 0x674fc839, "device_register" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc10153f0, "proc_mkdir_data" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xbfd18f3b, "sock_wake_async" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x98001cfc, "init_net" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x4c9200f3, "__sock_recv_ts_and_drops" },
	{ 0x681e3cee, "module_put" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb6285377, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x94bd2068, "put_device" },
	{ 0x2b9997fb, "atomic_notifier_chain_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a91fbff, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb6a1b0cd, "remove_proc_subtree" },
	{ 0x5e87617f, "proc_create_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x96848186, "scnprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x806f9540, "dev_set_name" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xd27628af, "skb_free_datagram" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5AEDFEF40168540CCE591D7");
