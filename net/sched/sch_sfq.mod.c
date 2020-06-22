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
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6bfaa073, "tcf_classify" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xd5e582dc, "skb_get_hash_perturb" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd3c66ef2, "qdisc_tree_reduce_backlog" },
	{ 0x5418a952, "rtnl_kfree_skbs" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2e462c6c, "tcf_block_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x581b46ac, "gnet_stats_copy_app" },
	{ 0xf9494d33, "gnet_stats_copy_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfa0332d1, "tcf_block_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2AC42FA503471BD9CC1E06D");
