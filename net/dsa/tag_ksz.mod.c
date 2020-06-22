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
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xb6a700fa, "skb_copy_and_csum_dev" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x95411990, "pskb_trim_rcsum_slow" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "DE69AE3E8354A1A15AB361A");
