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
	{ 0xefbd2a4c, "l2tp_session_free" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xc65b3dce, "l2tp_tunnel_get_nth" },
	{ 0x2b9da7a4, "genl_lock" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0x5a645fb, "l2tp_tunnel_get_session" },
	{ 0x754d539c, "strlen" },
	{ 0x7f28e621, "l2tp_tunnel_free" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0xeb3dd46e, "l2tp_tunnel_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0xdb782633, "l2tp_tunnel_create" },
	{ 0x36cf81c6, "l2tp_tunnel_get" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x53cd2a94, "l2tp_session_get_nth" },
	{ 0x2d140a58, "genl_unlock" },
	{ 0x92a41d63, "l2tp_session_get_by_ifname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x75e5a425, "genlmsg_multicast_allns" },
	{ 0x37a0cba, "kfree" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x52565a3d, "l2tp_tunnel_delete" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x909251a2, "l2tp_session_set_header_len" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0C4AD0ACD0CEB9DC5BCAD84");
