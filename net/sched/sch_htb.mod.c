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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x6d2bb3cf, "unregister_qdisc" },
	{ 0xe502928, "register_qdisc" },
	{ 0x4f323e9d, "__qdisc_calculate_pkt_len" },
	{ 0x6bfaa073, "tcf_classify" },
	{ 0xb540e568, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0xf599bbb8, "qdisc_class_hash_grow" },
	{ 0xb2cb334, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe4836bc3, "qdisc_warn_nonwc" },
	{ 0x10ec9b01, "qdisc_watchdog_schedule_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5d49133f, "noop_qdisc" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0x6db529cd, "qdisc_create_dflt" },
	{ 0x68d6400a, "pfifo_qdisc_ops" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xd3c66ef2, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x581b46ac, "gnet_stats_copy_app" },
	{ 0xf9494d33, "gnet_stats_copy_queue" },
	{ 0x550bdd9e, "gnet_stats_copy_rate_est" },
	{ 0xc01ad164, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2e462c6c, "tcf_block_get" },
	{ 0x4495d10b, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5418a952, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xc6cb1d04, "qdisc_watchdog_cancel" },
	{ 0x258b4cc8, "qdisc_reset" },
	{ 0x37a0cba, "kfree" },
	{ 0xfa0332d1, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x7502b252, "qdisc_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca9360b5, "rb_next" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa87aef4e, "__netif_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B93A428CA6D03CDE9F4471");
