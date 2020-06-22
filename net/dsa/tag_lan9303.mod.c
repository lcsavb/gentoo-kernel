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
	{ 0x324f5d0a, "dsa_tag_drivers_unregister" },
	{ 0x8588a966, "dsa_tag_drivers_register" },
	{ 0x17475388, "_dev_warn" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "DF315C71E0F0B3DD6A5CF48");
