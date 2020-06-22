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
	{ 0xa5f71562, "nft_reject_policy" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0x1e9e5fe, "nf_reject_ip_tcphdr_put" },
	{ 0x1078f32c, "nf_reject_ip_tcphdr_get" },
	{ 0x1de558c1, "nft_reject_icmpv6_code" },
	{ 0xe2c84666, "nft_reject_icmp_code" },
	{ 0xa8c4d3ed, "nf_reject_ip6_tcphdr_put" },
	{ 0x7e4d517b, "nf_reject_ip6_tcphdr_get" },
	{ 0x2124474, "ip_send_check" },
	{ 0xf44384ac, "nf_reject_iphdr_put" },
	{ 0xb4f523b9, "nf_ip_checksum" },
	{ 0x95411990, "pskb_trim_rcsum_slow" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x558dbaa7, "br_forward" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb1337089, "nf_reject_ip6hdr_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x3d649b10, "nf_ip6_checksum" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4,nf_reject_ipv6,bridge");


MODULE_INFO(srcversion, "15C911FF49D06842EB551D3");
