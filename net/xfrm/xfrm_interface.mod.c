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
	{ 0x75c24d01, "xfrm6_rcv" },
	{ 0x7eba69c1, "xfrm_input" },
	{ 0xb8e8c3b1, "xfrm4_rcv" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x582b6275, "xfrm_if_unregister_cb" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0xa2494d65, "xfrm_if_register_cb" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0x66578b1f, "xfrm6_protocol_register" },
	{ 0xbdf6516f, "xfrm4_protocol_register" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xceaac040, "ipv4_update_pmtu" },
	{ 0xfe51e648, "ipv4_redirect" },
	{ 0xf70e9c32, "ip6_redirect" },
	{ 0xc07ee139, "ip6_update_pmtu" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0x30a98961, "xfrm_state_lookup" },
	{ 0x8278c7d6, "__xfrm_policy_check" },
	{ 0xa8c9ba17, "__xfrm_state_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc5850110, "printk" },
	{ 0x458b7fc9, "icmpv6_send" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xa060c23c, "__icmp_send" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x1e1bd78c, "ip_route_output_key_hash" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xf50e9e8f, "ip6_route_output_flags" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5ef9b94b, "xfrm_lookup_with_ifid" },
	{ 0x9aa3007e, "__xfrm_decode_session" },
	{ 0x7d336e05, "dst_release" },
	{ 0x3d29dae0, "__skb_ext_del" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2b3ab9b2, "xfrm6_protocol_deregister" },
	{ 0x58bb14f0, "xfrm4_protocol_deregister" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x7c8bb9a1, "gro_cells_init" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0xb8b7e7ef, "netdev_state_change" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "FBE25DE5C4AC41704295169");
