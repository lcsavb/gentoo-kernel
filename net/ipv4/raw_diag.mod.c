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
	{ 0x32293aa5, "inet_diag_unregister" },
	{ 0xfacbb191, "inet_diag_register" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xd14db570, "sock_diag_destroy" },
	{ 0x401e9b5b, "inet_sk_diag_fill" },
	{ 0x16c6759d, "inet_diag_bc_sk" },
	{ 0xcd2bf8ae, "netlink_net_capable" },
	{ 0xb510c250, "raw_v4_hashinfo" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8e735fe9, "__raw_v4_lookup" },
	{ 0x5a385f1d, "__raw_v6_lookup" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xed7c7b91, "raw_v6_hashinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag,ipv6");


MODULE_INFO(srcversion, "4E5A931CEBE4664E5012A22");
