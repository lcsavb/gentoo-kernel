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
	{ 0xb1191624, "unregister_tcf_proto_ops" },
	{ 0x4e974bd6, "register_tcf_proto_ops" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8e39a203, "tcf_exts_validate" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x36a099f6, "__module_get" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7c6d89c5, "tcf_action_exec" },
	{ 0x962af193, "__skb_flow_dissect" },
	{ 0x4b5d43a2, "skb_flow_dissect_ct" },
	{ 0x861bb0b3, "skb_flow_dissect_tunnel_info" },
	{ 0x3fd3605f, "skb_flow_dissect_meta" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa4353be2, "tcf_exts_dump_stats" },
	{ 0xbdc5a18a, "tcf_exts_dump" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1cf0f8b9, "tc_setup_cb_reoffload" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6d5f5b91, "radix_tree_tagged" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x754d539c, "strlen" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x9c9fafe0, "__dev_get_by_name" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xcc1b882a, "idr_get_next_ul" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x879ac1d4, "tc_setup_cb_call" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x681e3cee, "module_put" },
	{ 0x20978fb9, "idr_find" },
	{ 0x37420b51, "tc_cleanup_flow_action" },
	{ 0x60157142, "tc_setup_cb_add" },
	{ 0x7a071d39, "tc_setup_flow_action" },
	{ 0x5dbe1a84, "flow_rule_alloc" },
	{ 0x5c635e9, "tcf_exts_num_actions" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x12a947b5, "tc_setup_cb_destroy" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0xcb785b84, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6222e5fd, "tcf_exts_destroy" },
	{ 0x1e62643b, "skb_flow_dissector_init" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "32FC492E6C4D0669BFD80A0");
