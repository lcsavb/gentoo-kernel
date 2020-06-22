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
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x86915dc9, "fw_send_request" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xa7d8c473, "skb_clone" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x353d3abf, "fw_bus_type" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83185323, "fw_iso_context_start" },
	{ 0x317d5c0, "fw_iso_context_queue_flush" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x7cc4a5d, "printk_timed_ratelimit" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6d495207, "register_netdev" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xac51ef1f, "fw_iso_buffer_destroy" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7d9ac42d, "fw_iso_context_queue" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1687802c, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x84d83c1d, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xa2eb1cf5, "fw_iso_context_stop" },
	{ 0xc9d1684e, "fw_core_remove_address_handler" },
	{ 0x37a0cba, "kfree" },
	{ 0x3d91377d, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xa227e45f, "consume_skb" },
	{ 0xa25f8b41, "fw_iso_buffer_init" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0x9c7c8612, "fw_iso_context_destroy" },
	{ 0x60c44378, "fw_send_response" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
};

MODULE_INFO(depends, "firewire-core");

MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000001*");
MODULE_ALIAS("ieee1394:ven*mo*sp0000005Ever00000002*");

MODULE_INFO(srcversion, "84E6DF182A9AEA0C2E057E8");
