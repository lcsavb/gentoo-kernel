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
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x84a1386a, "lwtunnel_encap_del_ops" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0xf9050bb1, "lwtunnel_encap_add_ops" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0x7d336e05, "dst_release" },
	{ 0xdf30b2c4, "dst_cache_set_ip6" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x1a281859, "pv_ops" },
	{ 0x5cb7a618, "lwtunnel_state_alloc" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x5674b3cb, "rhashtable_free_and_destroy" },
	{ 0x9007d972, "rhashtable_walk_peek" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x8ef479e9, "nf_unregister_net_hooks" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a820d3, "dst_cache_get" },
	{ 0x8162c74, "free_bucket_spinlocks" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0x6a06cf13, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xada38766, "dst_cache_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe8fbf4fa, "__alloc_bucket_spinlocks" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x8524a742, "inet_proto_csum_replace_by_diff" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "1B467CD59947446E534D751");
