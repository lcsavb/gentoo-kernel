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
	{ 0x966a1983, "tcf_em_unregister" },
	{ 0x3a8827fa, "tcf_em_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x23829572, "dev_get_by_index_rcu" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x9cba64bd, "ip_set_test" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4e79cef9, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0x858774a6, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "4769C202318A84B97C95ABA");
