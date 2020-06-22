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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9da2fcba, "nf_ct_helper_expectfn_unregister" },
	{ 0xf1a3aed0, "nf_ct_helper_expectfn_register" },
	{ 0xeb8dc786, "nat_q931_hook" },
	{ 0x330b0c52, "nat_callforwarding_hook" },
	{ 0x4595ad9e, "nat_h245_hook" },
	{ 0xe03702f1, "nat_t120_hook" },
	{ 0xe9301c63, "nat_rtp_rtcp_hook" },
	{ 0x7d3db02c, "set_ras_addr_hook" },
	{ 0x8413c908, "set_sig_addr_hook" },
	{ 0xf38db068, "set_h225_addr_hook" },
	{ 0x51ae9b8b, "set_h245_addr_hook" },
	{ 0xef8673a4, "nf_ct_unexpect_related" },
	{ 0x69d71c13, "get_h225_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x9ae8acfb, "__nf_nat_mangle_tcp_packet" },
	{ 0x4b73f2bc, "nf_nat_mangle_udp_packet" },
	{ 0xe6b03de9, "nf_nat_follow_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9f33ead, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
