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
	{ 0x3161f308, "nf_ct_bridge_unregister" },
	{ 0x18823373, "nf_ct_bridge_register" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x13c13d5, "ip_fraglist_prepare" },
	{ 0xac888ef6, "ip_fraglist_init" },
	{ 0xce51ad6c, "skb_checksum_help" },
	{ 0x20c22631, "ip_frag_next" },
	{ 0xd0323b61, "ip_frag_init" },
	{ 0x8dc2884a, "__nf_conntrack_confirm" },
	{ 0xdab2e654, "nf_confirm" },
	{ 0x710d071a, "nf_ct_deliver_cached_events" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95411990, "pskb_trim_rcsum_slow" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc11f5931, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6b9196db, "nf_conntrack_in" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd82744d4, "nf_ipv6_ops" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x1d548aeb, "br_dev_queue_push_xmit" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,bridge");


MODULE_INFO(srcversion, "03AB41A0D0F1743C52B3AF3");
