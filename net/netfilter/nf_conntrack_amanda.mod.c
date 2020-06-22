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
	{ 0x4d464094, "__nf_ct_refresh_acct" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xeeb68c17, "nf_ct_expect_init" },
	{ 0x738f1ea2, "textsearch_prepare" },
	{ 0x9384353c, "nf_conntrack_helpers_register" },
	{ 0xa141a1f8, "skb_find_text" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0xa4156720, "nf_ct_expect_put" },
	{ 0xb9c38f17, "nf_ct_expect_alloc" },
	{ 0x4d5a6fdf, "nf_ct_expect_related_report" },
	{ 0x1275e141, "nf_conntrack_helpers_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a0d60c4, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe1fae567, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xed958540, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "1BC46C57B6CBB9C5AB74CEA");
