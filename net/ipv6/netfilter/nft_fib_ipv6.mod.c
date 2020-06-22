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
	{ 0x7d336e05, "dst_release" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0xf20e29bd, "nft_fib_validate" },
	{ 0x13c96388, "nft_fib_store_result" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0xd82744d4, "nf_ipv6_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27133a01, "ip6_route_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef9cfacc, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x42990177, "nft_fib_dump" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "nf_tables,nft_fib,ipv6");


MODULE_INFO(srcversion, "4913CECBDD4FE4DCF997055");
