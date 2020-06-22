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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xaa91c651, "ip_tunnel_get_link_net" },
	{ 0x34cb3320, "ip_tunnel_dellink" },
	{ 0x834d1e70, "ip_tunnel_get_iflink" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0xcf30b3ab, "ip_tunnel_change_mtu" },
	{ 0x32c07e41, "ip_tunnel_uninit" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x5b1bfbf7, "xfrm4_tunnel_deregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xc6ed38e2, "xfrm4_tunnel_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0x619c2ac5, "ip_tunnel_rcv" },
	{ 0xf67b46e9, "metadata_dst_alloc" },
	{ 0x1b8a42a6, "__iptunnel_pull_header" },
	{ 0xbd49cea4, "ip_tunnel_init_net" },
	{ 0xc74fad34, "ip_tunnel_delete_nets" },
	{ 0xfe51e648, "ipv4_redirect" },
	{ 0xceaac040, "ipv4_update_pmtu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xca22e5e5, "ip_tunnel_lookup" },
	{ 0x7daa498a, "ip_tunnel_init" },
	{ 0xa75614d3, "ip_tunnel_xmit" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x57ab45b3, "ip_md_tunnel_xmit" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8cabca0d, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdff6a7ec, "ip_tunnel_setup" },
	{ 0xd5fa980e, "ip_tunnel_newlink" },
	{ 0x3e0da322, "ip_tunnel_changelink" },
	{ 0x4d0d0639, "ip_tunnel_encap_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4");


MODULE_INFO(srcversion, "9A6A4131175A3E3A4DD9F0D");
