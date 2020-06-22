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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8c0e98a4, "nfnetlink_subsys_unregister" },
	{ 0x5c47064, "nf_ct_timeout_put_hook" },
	{ 0x7fecf2ae, "nf_ct_timeout_find_get_hook" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xf19975a, "nfnetlink_subsys_register" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1b8814cd, "__netlink_dump_start" },
	{ 0x754d539c, "strlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5931f8af, "netlink_unicast" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc69160ab, "__nlmsg_put" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0xc055d362, "nf_ct_l4proto_find" },
	{ 0x411d5a89, "nf_ct_unconfirmed_destroy" },
	{ 0xaa681bcf, "nf_ct_untimeout" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x5a921311, "strncmp" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x681e3cee, "module_put" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "74EBFE189ADC28E89619323");
