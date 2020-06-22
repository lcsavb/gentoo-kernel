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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x44226a8, "release_sock" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xcea6cbbc, "rds_trans_register" },
	{ 0x99302c94, "kernel_sendmsg" },
	{ 0xc2b73dab, "sock_create_lite" },
	{ 0x291d6e90, "ipv6_chk_addr" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xb5412592, "rds_conn_path_drop" },
	{ 0x771df2cc, "sock_release" },
	{ 0xbcf4d0a6, "rds_inc_path_init" },
	{ 0x36087aa4, "rds_stats" },
	{ 0xb3a37215, "rds_send_ping" },
	{ 0x7dac7c74, "rds_conn_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x288c0b1b, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8cddd301, "rds_recv_incoming" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1a281859, "pv_ops" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf456afd7, "kernel_setsockopt" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x12ebd52b, "rds_connect_path_complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xd3e6fc5b, "pskb_extract" },
	{ 0xc1f6d989, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb020be4b, "inet_addr_type" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xeb15b874, "rds_info_register_func" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8193e0e5, "rds_inc_put" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0xc51c9be0, "kernel_sock_shutdown" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0x751e5c56, "rds_send_path_drop_acked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x98001cfc, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9e6e6f45, "rds_conn_destroy" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x36a099f6, "__module_get" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x4662187c, "rds_info_deregister_func" },
	{ 0x3702af60, "rds_trans_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2a9b4378, "register_net_sysctl" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x8465e40c, "rds_conn_path_connect_if_down" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x5dd81d45, "tcp_read_sock" },
	{ 0xa4168483, "rds_send_path_reset" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfd22dd56, "rds_cong_map_updated" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "rds,ipv6");


MODULE_INFO(srcversion, "013E26805A379D10FAF6B9F");
