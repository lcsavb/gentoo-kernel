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
	{ 0x9522d3d2, "nf_nat_ipv4_unregister_fn" },
	{ 0x590b46cf, "nf_nat_ipv4_register_fn" },
	{ 0x10414e77, "nf_nat_ipv6_unregister_fn" },
	{ 0x42c30b8a, "nf_nat_ipv6_register_fn" },
	{ 0x15950c92, "nft_unregister_chain_type" },
	{ 0x9b810f73, "nft_register_chain_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c5359d2, "nft_do_chain" },
	{ 0x246fea0c, "ipv6_find_hdr" },
	{ 0x7a82efd1, "nf_nat_inet_register_fn" },
	{ 0xee69d4c8, "nf_nat_inet_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "51D8344CDE1416E9E25593D");
