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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0x1b7b2a8c, "sock_efree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E621914F3F3ED405C5F3A4A");
