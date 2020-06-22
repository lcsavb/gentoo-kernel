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
	{ 0x4a168799, "lowpan_nhc_del" },
	{ 0x4aa3d4f9, "lowpan_nhc_add" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "6lowpan");


MODULE_INFO(srcversion, "F8A517649AA6070920BAA3F");
