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
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0xbdae2178, "nft_unregister_obj" },
	{ 0x68b271d, "nft_register_obj" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc055d362, "nf_ct_l4proto_find" },
	{ 0xbf1966d3, "nf_connlabels_replace" },
	{ 0x754d539c, "strlen" },
	{ 0x98001cfc, "init_net" },
	{ 0x4ca9e646, "nf_connlabels_put" },
	{ 0xadfd166c, "nf_connlabels_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0xb3d6bddc, "nf_ct_get_id" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x394ed3f1, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x6791e905, "nf_ct_tmpl_alloc" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xda410560, "nft_dump_register" },
	{ 0xad5f4bbe, "nf_conntrack_helper_try_module_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x6faf2c6f, "nf_conntrack_helper_put" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeeb68c17, "nf_ct_expect_init" },
	{ 0xb9c38f17, "nf_ct_expect_alloc" },
	{ 0x793477af, "nf_ct_helper_ext_add" },
	{ 0x4d464094, "__nf_ct_refresh_acct" },
	{ 0x99a9f2aa, "nf_ct_ext_add" },
	{ 0x319e850, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa681bcf, "nf_ct_untimeout" },
	{ 0xdb6f3d60, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "F7512F442AC3FAB2278ED7F");
