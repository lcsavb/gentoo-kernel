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
	{ 0x6791e905, "nf_ct_tmpl_alloc" },
	{ 0x67bc1d51, "nf_ct_seqadj_init" },
	{ 0x541662b, "nf_ct_tmpl_free" },
	{ 0x9443a32d, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0xd517f601, "seq_puts" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x2966aa82, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x8ef479e9, "nf_unregister_net_hooks" },
	{ 0x84cf80eb, "skb_ensure_writable" },
	{ 0xfe91ea5a, "ip_route_me_harder" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0xd82744d4, "nf_ipv6_ops" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x6a06cf13, "nf_register_net_hooks" },
	{ 0x1ba2862e, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40d2e18b, "proc_create_net_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xd0892f92, "nf_ct_extend_unregister" },
	{ 0xa976931f, "nf_ct_extend_register" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0xe86f6a5e, "ip6_local_out" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x99a9f2aa, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5262510D98F8ADE5CF5FC75");
