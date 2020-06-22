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
	{ 0x44226a8, "release_sock" },
	{ 0xf12c8b5, "sctp_transport_lookup_process" },
	{ 0x32293aa5, "inet_diag_unregister" },
	{ 0x981af9ee, "inet_diag_msg_attrs_fill" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x9ed8133a, "nla_reserve_64bit" },
	{ 0x313684f, "inet_diag_msg_common_fill" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2fcabb10, "sctp_for_each_transport" },
	{ 0x5fce5eea, "sock_diag_check_cookie" },
	{ 0x5750d198, "sock_diag_save_cookie" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xfacbb191, "inet_diag_register" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x5392da22, "sctp_get_sctp_info" },
	{ 0x80acf0a3, "sctp_for_each_endpoint" },
	{ 0xcd2bf8ae, "netlink_net_capable" },
};

MODULE_INFO(depends, "sctp,inet_diag");


MODULE_INFO(srcversion, "D092CC9513C1D0ADDDFF98D");
