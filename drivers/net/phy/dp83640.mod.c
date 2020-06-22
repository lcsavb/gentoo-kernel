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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x7c4f5069, "phy_driver_unregister" },
	{ 0x94bd2068, "put_device" },
	{ 0x5c4901fb, "phy_driver_register" },
	{ 0xd977dd6a, "skb_complete_tx_timestamp" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3de36fce, "ptp_clock_event" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xccc9e362, "ptp_clock_unregister" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c534a6, "ptp_clock_register" },
	{ 0xd94181ab, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xe53e43f4, "skb_queue_head" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0x2e9796aa, "ptp_find_pin" },
	{ 0x17475388, "_dev_warn" },
	{ 0x44969c51, "dev_mc_del" },
	{ 0x7e561391, "dev_mc_add" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x765b90b6, "genphy_soft_reset" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0xf15da167, "ptp_clock_index" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("mdio:0010000000000000010111001110????");

MODULE_INFO(srcversion, "D871A583226E1AE54A5A65E");
