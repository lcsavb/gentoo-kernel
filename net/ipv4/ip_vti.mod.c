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
	{ 0xaa91c651, "ip_tunnel_get_link_net" },
	{ 0x34cb3320, "ip_tunnel_dellink" },
	{ 0x834d1e70, "ip_tunnel_get_iflink" },
	{ 0x5033d522, "ip_tunnel_get_stats64" },
	{ 0xcf30b3ab, "ip_tunnel_change_mtu" },
	{ 0x32c07e41, "ip_tunnel_uninit" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x58bb14f0, "xfrm4_protocol_deregister" },
	{ 0x5b1bfbf7, "xfrm4_tunnel_deregister" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xc6ed38e2, "xfrm4_tunnel_register" },
	{ 0xbdf6516f, "xfrm4_protocol_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xc5850110, "printk" },
	{ 0x7eba69c1, "xfrm_input" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x12cdcbe8, "skb_scrub_packet" },
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0x1e1bd78c, "ip_route_output_key_hash" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7d336e05, "dst_release" },
	{ 0x9143c5f4, "xfrm_lookup" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0x9aa3007e, "__xfrm_decode_session" },
	{ 0xbd49cea4, "ip_tunnel_init_net" },
	{ 0xc74fad34, "ip_tunnel_delete_nets" },
	{ 0xceaac040, "ipv4_update_pmtu" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfe51e648, "ipv4_redirect" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0xca22e5e5, "ip_tunnel_lookup" },
	{ 0x7daa498a, "ip_tunnel_init" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8cabca0d, "ip_tunnel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdff6a7ec, "ip_tunnel_setup" },
	{ 0xd5fa980e, "ip_tunnel_newlink" },
	{ 0x3e0da322, "ip_tunnel_changelink" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_tunnel,tunnel4,ipv6");


MODULE_INFO(srcversion, "2E36DF7CBB6E55458E614E1");
