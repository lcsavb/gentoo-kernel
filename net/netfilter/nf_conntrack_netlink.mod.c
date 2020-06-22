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
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x8c0e98a4, "nfnetlink_subsys_unregister" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xf19975a, "nfnetlink_subsys_register" },
	{ 0xe92c6b47, "nf_ct_iterate_cleanup_net" },
	{ 0x2fe51b77, "nf_ct_remove_expectations" },
	{ 0xf47e4a72, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0x4e6285d5, "__nf_ct_expect_find" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0x816a881a, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x1a281859, "pv_ops" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb6d8eac, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x3afed263, "nfnetlink_has_listeners" },
	{ 0x2c083a8b, "nfnetlink_set_err" },
	{ 0xa95de4ab, "nfnetlink_send" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xa97463c9, "__siphash_aligned" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe85b12f6, "nf_conntrack_free" },
	{ 0x95df2a39, "__nf_ct_try_assign_helper" },
	{ 0xfa864f95, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x6c273993, "nf_conntrack_find_get" },
	{ 0x99a9f2aa, "nf_ct_ext_add" },
	{ 0x793477af, "nf_ct_helper_ext_add" },
	{ 0x88b5f4de, "__nf_conntrack_helper_find" },
	{ 0x179b307e, "nf_conntrack_alloc" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa1d4ff34, "nf_nat_hook" },
	{ 0xce555c6c, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xb9c38f17, "nf_ct_expect_alloc" },
	{ 0x725e5a50, "nf_ct_unlink_expect_report" },
	{ 0x675450e6, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x3170ece5, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbf1966d3, "nf_connlabels_replace" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa4156720, "nf_ct_expect_put" },
	{ 0x1b8814cd, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0x6faed8cc, "nf_ct_expect_register_notifier" },
	{ 0xcb94c868, "nf_conntrack_register_notifier" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3d6bddc, "nf_ct_get_id" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc055d362, "nf_ct_l4proto_find" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfc7fc1fd, "nf_conntrack_unregister_notifier" },
	{ 0x95dc718a, "nf_ct_expect_unregister_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "15DA5C82348B056D522944C");
