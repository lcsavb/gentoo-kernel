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
	{ 0x35a52211, "sock_diag_unregister" },
	{ 0x18dea215, "sock_diag_register" },
	{ 0xd9815f79, "tipc_sk_fill_sock_diag" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x1b8814cd, "__netlink_dump_start" },
	{ 0xecbf79e7, "tipc_dump_done" },
	{ 0xee07ca2f, "tipc_dump_start" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5750d198, "sock_diag_save_cookie" },
	{ 0x939800ee, "tipc_nl_sk_walk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tipc");


MODULE_INFO(srcversion, "C96A97727349ED9FD4BA31A");
