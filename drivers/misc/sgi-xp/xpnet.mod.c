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
	{ 0x3d38ff95, "module_layout" },
	{ 0xe7f3cf29, "eth_validate_addr" },
	{ 0xc066b515, "eth_mac_addr" },
	{ 0xc1ccd18f, "unregister_netdev" },
	{ 0x213a3e03, "free_netdev" },
	{ 0xf9c625be, "register_netdev" },
	{ 0xf3b47f67, "xp_partition_id" },
	{ 0xf0df3833, "alloc_netdev_mqs" },
	{ 0xf5b0d4f0, "ether_setup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x72f697fa, "_dev_info" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x345c9217, "xpc_disconnect" },
	{ 0xacb4d700, "__dev_kfree_skb_any" },
	{ 0x7e7fa8f0, "netif_carrier_off" },
	{ 0xb4a9c175, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xba3c3c50, "netif_rx_ni" },
	{ 0x52278a52, "eth_type_trans" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x68fa7d28, "xp_remote_memcpy" },
	{ 0x686a8480, "skb_put" },
	{ 0x13f9066f, "__netdev_alloc_skb" },
	{ 0x25bb9d05, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb8597378, "consume_skb" },
	{ 0xead4f7fe, "xp_max_npartitions" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe68acd6c, "xpc_interface" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64ba5017, "xp_pa" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x6876e8f3, "__dynamic_dev_dbg" },
	{ 0xc04c7267, "xpc_connect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xp");


MODULE_INFO(srcversion, "A0EB1A3D2ECB9010C1F5C6B");
