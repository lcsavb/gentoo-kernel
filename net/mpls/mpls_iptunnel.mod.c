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
	{ 0x84a1386a, "lwtunnel_encap_del_ops" },
	{ 0xf9050bb1, "lwtunnel_encap_add_ops" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xcecaca78, "nla_put_labels" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x5cb7a618, "lwtunnel_state_alloc" },
	{ 0xe413b0a4, "nla_get_labels" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xd55e95b2, "__skb_warn_lro_forwarding" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x74b280e0, "neigh_xmit" },
	{ 0xdd1b005f, "mpls_stats_inc_outucastpkts" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0x6ad19923, "mpls_pkt_too_big" },
	{ 0xf036c3f9, "mpls_dev_mtu" },
	{ 0x92adaf94, "mpls_output_possible" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mpls_router");


MODULE_INFO(srcversion, "048A96D3F8D47F731D4293C");
