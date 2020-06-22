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
	{ 0xc81f2e3d, "nf_nat_pptp_hook_expectfn" },
	{ 0xdbf70ec1, "nf_nat_pptp_hook_exp_gre" },
	{ 0x64381c3c, "nf_nat_pptp_hook_inbound" },
	{ 0x13bb5f70, "nf_nat_pptp_hook_outbound" },
	{ 0x827cc6a1, "pptp_msg_name" },
	{ 0x9ae8acfb, "__nf_nat_mangle_tcp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc9f33ead, "nf_nat_setup_info" },
	{ 0xa4156720, "nf_ct_expect_put" },
	{ 0xef8673a4, "nf_ct_unexpect_related" },
	{ 0x3170ece5, "nf_ct_expect_find_get" },
	{ 0x3be4324b, "nf_ct_nat_ext_add" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack_pptp,nf_nat,nf_conntrack");


MODULE_INFO(srcversion, "3E86FA10AFE5EE0CD42C636");
