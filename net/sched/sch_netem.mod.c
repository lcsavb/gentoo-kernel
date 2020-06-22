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
	{ 0x6d2bb3cf, "unregister_qdisc" },
	{ 0xe502928, "register_qdisc" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x10ec9b01, "qdisc_watchdog_schedule_ns" },
	{ 0x95947206, "kfree_skb_list" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0xa857ae3c, "netif_skb_features" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xd3c66ef2, "qdisc_tree_reduce_backlog" },
	{ 0x4f323e9d, "__qdisc_calculate_pkt_len" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x1573cc7b, "skb_orphan_partial" },
	{ 0x4495d10b, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x258b4cc8, "qdisc_reset" },
	{ 0x5418a952, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x7502b252, "qdisc_put" },
	{ 0xc6cb1d04, "qdisc_watchdog_cancel" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A89537B3FCE8134F3DE4E9");
