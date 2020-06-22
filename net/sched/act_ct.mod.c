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
	{ 0xe76b0eb5, "tcf_unregister_action" },
	{ 0xf69ce444, "tcf_register_action" },
	{ 0x816a881a, "nf_ct_delete" },
	{ 0x8dc2884a, "__nf_conntrack_confirm" },
	{ 0x3be4324b, "nf_ct_nat_ext_add" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x95411990, "pskb_trim_rcsum_slow" },
	{ 0xbf1966d3, "nf_connlabels_replace" },
	{ 0x710d071a, "nf_ct_deliver_cached_events" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x6b9196db, "nf_conntrack_in" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc11f5931, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2d88c2c9, "nf_ct_frag6_gather" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x246fea0c, "ipv6_find_hdr" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x65336712, "tcf_idr_insert" },
	{ 0x6791e905, "nf_ct_tmpl_alloc" },
	{ 0xc2ec78fc, "__tcf_idr_release" },
	{ 0xb9e6dac8, "tcf_idr_cleanup" },
	{ 0x4452bd7b, "tcf_idr_create" },
	{ 0x5afb87, "tcf_chain_put_by_act" },
	{ 0x91556927, "tcf_action_set_ctrlact" },
	{ 0x52c7de7a, "tcf_action_check_ctrlact" },
	{ 0x12fd2ea2, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xadfd166c, "nf_connlabels_get" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xfb578fc5, "memset" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbd664e6, "nf_nat_icmpv6_reply_translation" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xc9f33ead, "nf_nat_setup_info" },
	{ 0x5935b790, "nf_nat_icmp_reply_translation" },
	{ 0x209a7872, "nf_nat_packet" },
	{ 0x449999e0, "nf_nat_alloc_null_binding" },
	{ 0xdd7ee6a9, "tcf_idr_search" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x4cf43142, "tcf_generic_walker" },
	{ 0x37a0cba, "kfree" },
	{ 0x1460c9db, "tcf_idrinfo_destroy" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4ca9e646, "nf_connlabels_put" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_nat,nf_defrag_ipv6");


MODULE_INFO(srcversion, "E8DE7A4C8B83D77E93A35A9");
