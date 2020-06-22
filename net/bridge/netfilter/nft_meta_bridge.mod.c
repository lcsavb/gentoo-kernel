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
	{ 0x5170e7f3, "nft_meta_policy" },
	{ 0xd427891a, "nft_meta_get_dump" },
	{ 0xe7103e80, "nft_meta_set_validate" },
	{ 0xbda086b7, "nft_meta_set_dump" },
	{ 0x27e77982, "nft_meta_set_destroy" },
	{ 0xf71cd68f, "nft_meta_set_init" },
	{ 0x78f20a67, "nft_meta_set_eval" },
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb5501f81, "br_vlan_get_pvid_rcu" },
	{ 0x6d356e60, "nft_meta_get_eval" },
	{ 0x2889d74f, "br_vlan_get_proto" },
	{ 0x1d297063, "br_vlan_enabled" },
	{ 0x9166fada, "strncpy" },
	{ 0xdf7e0610, "netdev_master_upper_dev_get_rcu" },
	{ 0x51cae019, "nft_meta_get_init" },
	{ 0x394ed3f1, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "F61D317F57AF807E1DA077A");
