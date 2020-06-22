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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0xc055d362, "nf_ct_l4proto_find" },
	{ 0x7d336e05, "dst_release" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x2966aa82, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x33989f29, "inet_proto_csum_replace16" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x816a881a, "nf_ct_delete" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x74b280e0, "neigh_xmit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x120c0c21, "skb_gso_validate_network_len" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F474171BD6259BC83A45A36");
