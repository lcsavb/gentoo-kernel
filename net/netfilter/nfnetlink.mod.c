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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x21dceec6, "netlink_has_listeners" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbdc7cad1, "nlmsg_notify" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9dc8a135, "netlink_kernel_release" },
	{ 0xe2340e2f, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x681e3cee, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xebeeba3b, "netlink_ack" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xc09ff1de, "netlink_set_err" },
	{ 0x48d7ecd5, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xcd2bf8ae, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7951D6CDCDD7F33DA5D081");
