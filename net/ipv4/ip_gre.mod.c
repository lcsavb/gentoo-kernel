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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0x834d1e70, "ip_tunnel_get_iflink" },
	{ 0x7d336e05, "dst_release" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0xceaac040, "ipv4_update_pmtu" },
	{ 0xca22e5e5, "ip_tunnel_lookup" },
	{ 0xdcd6bc18, "__ip_tunnel_change_mtu" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0xa75614d3, "ip_tunnel_xmit" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x22496c9b, "inetdev_by_index" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0xdff6a7ec, "ip_tunnel_setup" },
	{ 0x34cb3320, "ip_tunnel_dellink" },
	{ 0xb4d239d, "skb_checksum" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc74fad34, "ip_tunnel_delete_nets" },
	{ 0x3dcce852, "gre_add_protocol" },
	{ 0xd5fa980e, "ip_tunnel_newlink" },
	{ 0xc5850110, "printk" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x32c07e41, "ip_tunnel_uninit" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xede1db20, "gre_del_protocol" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x7daa498a, "ip_tunnel_init" },
	{ 0xaa91c651, "ip_tunnel_get_link_net" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x20bdcf69, "__skb_get_hash" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x8cabca0d, "ip_tunnel_ioctl" },
	{ 0x2b14409d, "__ip_mc_dec_group" },
	{ 0x57ab45b3, "ip_md_tunnel_xmit" },
	{ 0x3e0da322, "ip_tunnel_changelink" },
	{ 0xccd03132, "rtnl_configure_link" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xfe51e648, "ipv4_redirect" },
	{ 0xf6d93511, "ip_mc_inc_group" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0xbd49cea4, "ip_tunnel_init_net" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x81a2325, "rtnl_create_link" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x68d580e4, "ip6_err_gen_icmpv6_unreach" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x4d0d0639, "ip_tunnel_encap_setup" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xcf30b3ab, "ip_tunnel_change_mtu" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b057fb0, "gre_parse_header" },
	{ 0x619c2ac5, "ip_tunnel_rcv" },
};

MODULE_INFO(depends, "ip_tunnel,gre,ipv6");


MODULE_INFO(srcversion, "B456B8545B0EC0034496388");
