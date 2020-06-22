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
	{ 0xbdae2178, "nft_unregister_obj" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0x68b271d, "nft_register_obj" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x394ed3f1, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xda410560, "nft_dump_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7d336e05, "dst_release" },
	{ 0x16adfa4a, "metadata_dst_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "4A4C579BD73B53A9F7C1B62");
