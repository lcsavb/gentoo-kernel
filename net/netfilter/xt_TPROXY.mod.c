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
	{ 0x27852741, "xt_unregister_targets" },
	{ 0x7c427ce6, "xt_register_targets" },
	{ 0xa3e7dd48, "nf_tproxy_handle_time_wait4" },
	{ 0x6cd529a, "nf_tproxy_laddr4" },
	{ 0x69bd19f7, "nf_tproxy_get_sock_v4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2e8b6666, "nf_tproxy_handle_time_wait6" },
	{ 0xa93213ac, "sock_edemux" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe678cef, "sock_gen_put" },
	{ 0x65b99d96, "nf_tproxy_laddr6" },
	{ 0xf290354f, "nf_tproxy_get_sock_v6" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x246fea0c, "ipv6_find_hdr" },
	{ 0x42106914, "nf_defrag_ipv4_enable" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6c358da3, "nf_defrag_ipv6_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "D7DB050158C2CB7B3B5305A");
