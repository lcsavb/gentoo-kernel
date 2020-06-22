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
	{ 0x8588a966, "dsa_tag_drivers_register" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x324f5d0a, "dsa_tag_drivers_unregister" },
	{ 0x1704efea, "dsa_port_vid_add" },
	{ 0x4fcb3430, "dsa_port_vid_del" },
	{ 0x66054141, "br_vlan_get_pvid" },
	{ 0x8b552cd5, "br_vlan_get_info" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "dsa_core,bridge");


MODULE_INFO(srcversion, "3B9797E533FBC8F9C78541C");
