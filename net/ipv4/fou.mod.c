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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xb1272f0b, "register_pernet_device" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x835831cb, "inet6_offloads" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0xaaeee204, "udp_sock_create6" },
	{ 0xadb5d596, "setup_udp_tunnel_sock" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x814b68ee, "udp_tunnel_sock_release" },
	{ 0xbc89dfd1, "ip_tunnel_encap_del_ops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xb6d0be62, "unregister_pernet_device" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x20bdcf69, "__skb_get_hash" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0x4b9897c8, "iptunnel_handle_offloads" },
	{ 0xacec1996, "inet_protos" },
	{ 0x5bf92b5f, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0xa82a2239, "udp_set_csum" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x696010c7, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x32412a45, "inet_get_local_port_range" },
	{ 0xc211151e, "ip_tunnel_encap_add_ops" },
	{ 0x4172821e, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ip_tunnel");


MODULE_INFO(srcversion, "4229586F03DCAD1C6693D72");
