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
	{ 0xcd031b, "nft_unregister_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb0813818, "flow_offload_free" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x7d336e05, "dst_release" },
	{ 0x9294e75e, "flow_offload_add" },
	{ 0xa59b2395, "flow_offload_alloc" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x21c07cf6, "nf_flow_table_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38340a35, "nf_route" },
	{ 0x319e850, "nf_ct_netns_get" },
	{ 0x47eca2be, "nft_flowtable_lookup" },
	{ 0xeee60b43, "nf_tables_deactivate_flowtable" },
	{ 0xdb6f3d60, "nf_ct_netns_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "CCFF1435C9E053B6C299A5F");
