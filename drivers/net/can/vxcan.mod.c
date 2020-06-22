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
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xcb785b84, "__put_net" },
	{ 0xccd03132, "rtnl_configure_link" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x81a2325, "rtnl_create_link" },
	{ 0x88231882, "rtnl_link_get_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x1b7b2a8c, "sock_efree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A028E50363AB9B8F6FCDF94");
