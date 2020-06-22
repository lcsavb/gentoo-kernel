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
	{ 0xd94c57bd, "phy_ethtool_set_link_ksettings" },
	{ 0x4058c914, "phy_ethtool_get_link_ksettings" },
	{ 0xea77672a, "ethtool_op_get_ts_info" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0xa7f0232e, "phy_ethtool_nway_reset" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6d495207, "register_netdev" },
	{ 0xa5d9d389, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7bdbb85e, "mdiobus_alloc_size" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xfef1b5ca, "device_property_present" },
	{ 0x7a871063, "device_property_read_u32_array" },
	{ 0xc15df89c, "device_get_mac_address" },
	{ 0x47731c0b, "device_get_phy_mode" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0x572c9830, "clk_get" },
	{ 0xb634ea27, "devm_gpiod_get_optional" },
	{ 0x52de0a54, "regulator_bulk_get" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x9ed3cb67, "phy_start" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x3bcb20c9, "phy_support_asym_pause" },
	{ 0xc9c6da8f, "phy_set_max_speed" },
	{ 0x29733ddc, "phy_attached_info" },
	{ 0xb54e9ad3, "phy_connect_direct" },
	{ 0xd80eb779, "phy_find_first" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0xd409bb5d, "skb_tstamp_tx" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0x4e5efb33, "skb_clone_tx_timestamp" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0x5c89612d, "phy_disconnect" },
	{ 0xf3225e40, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa8daaa5b, "mdiobus_write" },
	{ 0xc7a6cfae, "mdiobus_read" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf163231, "netdev_info" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x49dd3cf9, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xcbf38353, "platform_get_resource_byname" },
	{ 0x26eaaa97, "mdiobus_free" },
	{ 0xeeb75c9e, "mdiobus_unregister" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xa18edc27, "regulator_bulk_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1a281859, "pv_ops" },
};

MODULE_INFO(depends, "libphy");

MODULE_ALIAS("acpi*:ARMH9118:*");

MODULE_INFO(srcversion, "68F0EB6121BF76304B9B7B4");
