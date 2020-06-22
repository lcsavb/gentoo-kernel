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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf65ccabd, "open_candev" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9ee11a36, "close_candev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xf163231, "netdev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x72c0e387, "regulator_enable" },
	{ 0x256446e8, "devm_regulator_get_optional" },
	{ 0xcebe7641, "spi_setup" },
	{ 0xdf0ca1e4, "spi_get_device_id" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6f8688b6, "free_candev" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x62a8f80a, "can_change_state" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0x6e42a974, "netif_rx_ni" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfcf3c007, "can_free_echo_skb" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:hi3110");
MODULE_ALIAS("of:N*T*Cholt,hi3110");
MODULE_ALIAS("of:N*T*Cholt,hi3110C*");

MODULE_INFO(srcversion, "94523DBFC84B75F07CD1D8E");
