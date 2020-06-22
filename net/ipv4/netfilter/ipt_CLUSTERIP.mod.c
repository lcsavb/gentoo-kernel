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
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0x8fe66800, "xt_unregister_target" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa448c1d1, "xt_register_target" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x5e87617f, "proc_create_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe914e41e, "strcpy" },
	{ 0x319e850, "nf_ct_netns_get" },
	{ 0x30ad1974, "seq_release" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdb6f3d60, "nf_ct_netns_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5e06bc5c, "refcount_dec_and_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xed958540, "skb_copy_bits" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5850110, "printk" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0xdc6fef3a, "nf_register_net_hook" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbfd67a51, "seq_open" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xedd0b6d3, "nf_unregister_net_hook" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x55416c13, "proc_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd44f7a9f, "PDE_DATA" },
	{ 0xa6ac98, "seq_putc" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xc44e5013, "dev_get_by_name" },
	{ 0x7e561391, "dev_mc_add" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x44969c51, "dev_mc_del" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "CE25B1F6189CD89DA7E9946");
