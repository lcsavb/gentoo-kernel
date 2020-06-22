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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x1bd2159d, "genl_unregister_family" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0xa4cbf88a, "genl_register_family" },
	{ 0x8411e6eb, "rtnl_link_register" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x4aa518d2, "skb_trim" },
	{ 0x87b4e7fb, "genlmsg_put" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xf7a99aa1, "gro_cells_receive" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0x3e72f0da, "skb_to_sgvec" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x44244ffc, "skb_cow_data" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x49ef6e97, "skb_copy" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x6e6f5900, "skb_copy_expand" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdd4136d0, "netdev_rx_handler_register" },
	{ 0xe3c61c15, "linkwatch_fire_event" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xec3022dd, "netdev_upper_dev_link" },
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x7852d76c, "netif_stacked_transfer_operstate" },
	{ 0xfd8073e5, "dev_set_mtu" },
	{ 0x18e51b97, "netdev_rx_handler_unregister" },
	{ 0xddb826a2, "netdev_upper_dev_unlink" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a4497db, "kzfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7c8bb9a1, "gro_cells_init" },
	{ 0x9f54ead7, "gro_cells_destroy" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xa677e37c, "dev_uc_unsync" },
	{ 0x8f104ea1, "dev_mc_unsync" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x848d3f8f, "ether_setup" },
	{ 0x671802bd, "dev_set_promiscuity" },
	{ 0xb04f7cb6, "dev_set_allmulti" },
	{ 0x1efdcdfa, "dev_uc_sync" },
	{ 0x71a8a488, "dev_mc_sync" },
	{ 0xfaf2d928, "dev_uc_del" },
	{ 0xc03256e8, "dev_uc_add" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xcf60d427, "___pskb_trim" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xb0e602eb, "memmove" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0xc8414918, "crypto_alloc_aead" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xed4ec396, "__dev_get_by_index" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "17640531DC327CF3C5C93F2");
