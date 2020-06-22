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
	{ 0xc1d482b6, "can_rx_register" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0x85e41154, "can_proto_unregister" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xc5850110, "printk" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xf832b299, "can_send" },
	{ 0x4c9200f3, "__sock_recv_ts_and_drops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x259e3b27, "can_proto_register" },
	{ 0xc7f8e552, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xe10433, "can_rx_unregister" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd27628af, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "62AFAADAE2DE76135AEB15F");
