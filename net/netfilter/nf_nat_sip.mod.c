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
	{ 0xf1a3aed0, "nf_ct_helper_expectfn_register" },
	{ 0x917d2e50, "nf_nat_helper_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9da2fcba, "nf_ct_helper_expectfn_unregister" },
	{ 0xa8957e34, "nf_nat_sip_hooks" },
	{ 0x9c2e5cdf, "nf_nat_helper_unregister" },
	{ 0x84cf80eb, "skb_ensure_writable" },
	{ 0xcfb8e97e, "ct_sip_parse_numerical_param" },
	{ 0xf3a16832, "ct_sip_parse_request" },
	{ 0x650f509d, "ct_sip_parse_address_param" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x49f6b0a0, "ct_sip_parse_header_uri" },
	{ 0x64afe9e1, "nf_ct_seqadj_set" },
	{ 0x5a0d60c4, "nf_ct_helper_log" },
	{ 0xef8673a4, "nf_ct_unexpect_related" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x48bd5ec4, "ct_sip_get_header" },
	{ 0x44a43b6c, "ct_sip_get_sdp_header" },
	{ 0x9ae8acfb, "__nf_nat_mangle_tcp_packet" },
	{ 0x4b73f2bc, "nf_nat_mangle_udp_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc9f33ead, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_sip,nf_nat");


MODULE_INFO(srcversion, "F8EC5CBF3778DA7BD9D5D1E");
