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
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xf20e29bd, "nft_fib_validate" },
	{ 0x42990177, "nft_fib_dump" },
	{ 0xef9cfacc, "nft_fib_init" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0x5d770642, "nft_fib4_eval" },
	{ 0x110a02f1, "nft_fib4_eval_type" },
	{ 0xffdf8aad, "nft_fib6_eval" },
	{ 0xeb592e42, "nft_fib6_eval_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv4,nft_fib_ipv6");


MODULE_INFO(srcversion, "E5086181418D3AF1AF8553D");
