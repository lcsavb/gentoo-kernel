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
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0x7d336e05, "dst_release" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x18de55a8, "nf_ct_attach" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xb04fcc6b, "l3mdev_master_ifindex_rcu" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xe86f6a5e, "ip6_local_out" },
	{ 0x4ace5c85, "ip6_dst_hoplimit" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x3d649b10, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "EE3C9ED3747E193AAFF85F7");
