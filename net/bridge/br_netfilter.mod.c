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
	{ 0x95411990, "pskb_trim_rcsum_slow" },
	{ 0xcd16df5a, "skb_ext_add" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x58bdadda, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x7d336e05, "dst_release" },
	{ 0x24923e6b, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x99f53f53, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa39e1b3e, "nf_hook_slow" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x1d548aeb, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0x8ef479e9, "nf_unregister_net_hooks" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x98001cfc, "init_net" },
	{ 0xb3c4488f, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x3b716094, "ip_route_input_noref" },
	{ 0xd82744d4, "nf_ipv6_ops" },
	{ 0x6a06cf13, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x48e524e, "skb_pull_rcsum" },
	{ 0x1244d1e7, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb7bbc34, "nf_br_ops" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3d29dae0, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3b4c0ca1, "br_handle_frame_finish" },
	{ 0x2a9b4378, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge,ipv6");


MODULE_INFO(srcversion, "9A3ADAAECFA6EBC336DC6D7");
