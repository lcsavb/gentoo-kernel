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
	{ 0xef8673a4, "nf_ct_unexpect_related" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x4d464094, "__nf_ct_refresh_acct" },
	{ 0x7d336e05, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x89257399, "nf_ct_helper_init" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeeb68c17, "nf_ct_expect_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xec75e600, "nf_ip_route" },
	{ 0x9384353c, "nf_conntrack_helpers_register" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5850110, "printk" },
	{ 0xa4156720, "nf_ct_expect_put" },
	{ 0xb9c38f17, "nf_ct_expect_alloc" },
	{ 0x5a921311, "strncmp" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0x1275e141, "nf_conntrack_helpers_unregister" },
	{ 0xb3d159d4, "nf_ct_remove_expect" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x4e6285d5, "__nf_ct_expect_find" },
	{ 0xd82744d4, "nf_ipv6_ops" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a0d60c4, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xed958540, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5ACE7952A31403977A98976");
