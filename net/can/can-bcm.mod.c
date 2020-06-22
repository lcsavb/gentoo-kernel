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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1d482b6, "can_rx_register" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5f3f5b1b, "sock_gettstamp" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x85e41154, "can_proto_unregister" },
	{ 0x574b8d87, "proc_create_net_single" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0xde1a1c55, "sock_queue_rcv_skb" },
	{ 0xdc50fd6d, "skb_recv_datagram" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x21b15091, "sock_i_ino" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0xd44f7a9f, "PDE_DATA" },
	{ 0x1b7b2a8c, "sock_efree" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xa6ac98, "seq_putc" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xc10153f0, "proc_mkdir_data" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xb55f8321, "dev_get_by_index" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xf832b299, "can_send" },
	{ 0x4c9200f3, "__sock_recv_ts_and_drops" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x156540f8, "datagram_poll" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x259e3b27, "can_proto_register" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xe10433, "can_rx_unregister" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd27628af, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "43A766B5E768811CA7701A5");
