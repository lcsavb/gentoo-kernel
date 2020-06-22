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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xcb9131ec, "udp6_set_csum" },
	{ 0x771df2cc, "sock_release" },
	{ 0x288c0b1b, "sock_create_kern" },
	{ 0xf456afd7, "kernel_setsockopt" },
	{ 0xe1af6a42, "kernel_connect" },
	{ 0xc51c9be0, "kernel_sock_shutdown" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb88c6bb6, "kernel_bind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe86f6a5e, "ip6_local_out" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56C72BFC40F54931C4FFEDB");
