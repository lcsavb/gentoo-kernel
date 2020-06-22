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
	{ 0x8fe66800, "xt_unregister_target" },
	{ 0xa448c1d1, "xt_register_target" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f099794, "synproxy_init_timestamp_cookie" },
	{ 0x991ac81e, "synproxy_send_client_synack_ipv6" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x62f6f2a, "synproxy_recv_client_ack_ipv6" },
	{ 0x32f848d6, "synproxy_parse_options" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0x3d649b10, "nf_ip6_checksum" },
	{ 0xe9eb833b, "nf_synproxy_ipv6_init" },
	{ 0x319e850, "nf_ct_netns_get" },
	{ 0xdb6f3d60, "nf_ct_netns_put" },
	{ 0xb161ee4d, "nf_synproxy_ipv6_fini" },
	{ 0xca9fc082, "synproxy_net_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_synproxy_core,nf_conntrack");


MODULE_INFO(srcversion, "22806BCE1520A684EF1FA6D");
