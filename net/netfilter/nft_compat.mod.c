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
	{ 0x8c0e98a4, "nfnetlink_subsys_unregister" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0xf19975a, "nfnetlink_subsys_register" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0xc5850110, "printk" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf0494c1, "xt_check_match" },
	{ 0x59a4c6e8, "xt_check_target" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x67e9ed6e, "xt_request_find_match" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x2506235d, "xt_request_find_target" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x681e3cee, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables");


MODULE_INFO(srcversion, "4E1275E1A20D10EC7EF746B");
