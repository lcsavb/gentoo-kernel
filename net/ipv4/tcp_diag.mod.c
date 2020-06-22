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
	{ 0xfb578fc5, "memset" },
	{ 0x8e281574, "nla_reserve" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x8aca659f, "inet_diag_dump_icsk" },
	{ 0xb65d0681, "inet_diag_dump_one_icsk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a8c2628, "tcp_get_info" },
	{ 0xe678cef, "sock_gen_put" },
	{ 0xd14db570, "sock_diag_destroy" },
	{ 0xd717bb34, "inet_diag_find_one_icsk" },
	{ 0x463219fb, "tcp_hashinfo" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "inet_diag");


MODULE_INFO(srcversion, "F6A6B780EA285E138B299C8");
