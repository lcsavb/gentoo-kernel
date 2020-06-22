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
	{ 0xbdae2178, "nft_unregister_obj" },
	{ 0x895d1348, "nft_register_expr" },
	{ 0x68b271d, "nft_register_obj" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x5b47d2e1, "synproxy_send_client_synack" },
	{ 0x991ac81e, "synproxy_send_client_synack_ipv6" },
	{ 0x8750dfb6, "synproxy_recv_client_ack" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x62f6f2a, "synproxy_recv_client_ack_ipv6" },
	{ 0x32f848d6, "synproxy_parse_options" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xb4f523b9, "nf_ip_checksum" },
	{ 0xe9eb833b, "nf_synproxy_ipv6_init" },
	{ 0x98163663, "nf_synproxy_ipv4_init" },
	{ 0x319e850, "nf_ct_netns_get" },
	{ 0xb161ee4d, "nf_synproxy_ipv6_fini" },
	{ 0xdb6f3d60, "nf_ct_netns_put" },
	{ 0xc09c5b15, "nf_synproxy_ipv4_fini" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "5078F92CC9D3635C69712BE");
