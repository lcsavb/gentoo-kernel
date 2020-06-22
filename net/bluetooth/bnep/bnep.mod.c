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
	{ 0xd5689792, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0x6da1c78e, "sockfd_lookup" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x7b7151bc, "bt_sock_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x58973956, "sock_no_recvmsg" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xa025f2e7, "bt_sock_unlink" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x712e52f7, "current_task" },
	{ 0xcc8bc388, "l2cap_is_socket" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x98001cfc, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7419e1ca, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0x2f8d4f1c, "bt_sock_link" },
	{ 0x681e3cee, "module_put" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb6285377, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xba9610b0, "__module_put_and_exit" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x36a099f6, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xef4d20bb, "sock_no_sendmsg" },
	{ 0x51dde20f, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x8fc3c602, "bt_procfs_init" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xec76c2f0, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5EB8AAF4BEA7B3157007CA8");
