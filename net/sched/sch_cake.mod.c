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
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x382ab19e, "__skb_gso_segment" },
	{ 0xa857ae3c, "netif_skb_features" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x6bfaa073, "tcf_classify" },
	{ 0xf9494d33, "gnet_stats_copy_queue" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x2e462c6c, "tcf_block_get" },
	{ 0x4495d10b, "qdisc_watchdog_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x10ec9b01, "qdisc_watchdog_schedule_ns" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xd3c66ef2, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xb5f813e6, "nf_ct_get_tuple_skb" },
	{ 0xafa375ab, "flow_hash_from_keys" },
	{ 0x962af193, "__skb_flow_dissect" },
	{ 0xc025016c, "flow_keys_dissector" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xfa0332d1, "tcf_block_put" },
	{ 0xc6cb1d04, "qdisc_watchdog_cancel" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1967D82EA14C66411016DEF");
