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
	{ 0x771df2cc, "sock_release" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0x288c0b1b, "sock_create_kern" },
	{ 0xf456afd7, "kernel_setsockopt" },
	{ 0xe1af6a42, "kernel_connect" },
	{ 0xf8c097e2, "iptunnel_xmit" },
	{ 0xc51c9be0, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0x652a5f26, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa82a2239, "udp_set_csum" },
	{ 0xb88c6bb6, "kernel_bind" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A315BA6124B0664F4D23FB");
