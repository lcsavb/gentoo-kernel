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
	{ 0xfa94756d, "can_change_mtu" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf65ccabd, "open_candev" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0x9ee11a36, "close_candev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0x391901a1, "alloc_canfd_skb" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cifi,canfd-1.0");
MODULE_ALIAS("of:N*T*Cifi,canfd-1.0C*");

MODULE_INFO(srcversion, "C4115A1A2C0DB4D58E9C3EA");
