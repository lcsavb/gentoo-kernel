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
	{ 0x4aa518d2, "skb_trim" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x60a3cb24, "sock_i_uid" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x69ef4a7a, "sock_diag_put_meminfo" },
	{ 0x5750d198, "sock_diag_save_cookie" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0x21b15091, "sock_i_ino" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b8814cd, "__netlink_dump_start" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C825F2F5F90011761CC0F88");
