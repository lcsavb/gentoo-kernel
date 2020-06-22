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
	{ 0xa4518f46, "unregister_ip_vs_pe" },
	{ 0x970aa070, "register_ip_vs_pe" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x48bd5ec4, "ct_sip_get_header" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x246fea0c, "ipv6_find_hdr" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x619dd57a, "ip_vs_new_conn_out" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_conntrack_sip");


MODULE_INFO(srcversion, "C9C76B0127BA9FB1A4B93EC");
