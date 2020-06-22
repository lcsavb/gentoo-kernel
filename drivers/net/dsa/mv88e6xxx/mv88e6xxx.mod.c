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
	{ 0x2d3385d3, "system_wq" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x862258db, "timecounter_init" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1d91bf6b, "ptp_schedule_worker" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97c058e6, "irq_to_desc" },
	{ 0x217d41e5, "irq_domain_add_simple" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x15db55b1, "kthread_queue_delayed_work" },
	{ 0xd3053e57, "irq_find_mapping" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x963e2e39, "kthread_destroy_worker" },
	{ 0xa4181659, "irq_create_mapping" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9aa3a0e1, "devm_mdiobus_alloc_size" },
	{ 0xccc9e362, "ptp_clock_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3de36fce, "ptp_clock_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x486fd6bb, "dsa_unregister_switch" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5754634f, "mdio_driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd977dd6a, "skb_complete_tx_timestamp" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3c534a6, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d88f33a, "mdiobus_write_nested" },
	{ 0x222c9d61, "dsa_port_phylink_mac_change" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x7c21dc4a, "dsa_switch_alloc" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2bf10d87, "mdio_driver_register" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7da8cda7, "irq_set_chip_and_handler_name" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x3fa0e928, "phylink_helper_basex_speed" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2e9796aa, "ptp_find_pin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x5102946e, "dsa_register_switch" },
	{ 0xf15da167, "ptp_clock_index" },
	{ 0xc1d15a4c, "phylink_set_port_modes" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x65b03470, "irq_domain_remove" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf86f560, "kthread_delayed_work_timer_fn" },
	{ 0xd3bf657b, "mdiobus_read_nested" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee20c81c, "kthread_cancel_delayed_work_sync" },
	{ 0x20978fb9, "idr_find" },
	{ 0xc8da0fe1, "handle_level_irq" },
	{ 0x2373a0c4, "kthread_create_worker" },
	{ 0xa32fdbcf, "irq_domain_xlate_twocell" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libphy,dsa_core,phylink");

MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6085C*");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6190");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6190C*");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6250");
MODULE_ALIAS("of:N*T*Cmarvell,mv88e6250C*");

MODULE_INFO(srcversion, "D13D7C70FDBB1B25839D0C0");
