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
	{ 0x38268f40, "__fib_lookup" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0x64d0f726, "inet_dev_addr_type" },
	{ 0xf20e29bd, "nft_fib_validate" },
	{ 0x13c96388, "nft_fib_store_result" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaf4fb97c, "fib_info_nh_uses_dev" },
	{ 0xef9cfacc, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84d0d4c7, "fib_table_lookup" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x42990177, "nft_fib_dump" },
	{ 0xed958540, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "210EF046EC2824F4622D288");
