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
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x349cba85, "strchr" },
	{ 0x6d495207, "register_netdev" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xc5534d64, "ioread16" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0xf163231, "netdev_info" },
	{ 0xdec467d2, "napi_disable" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0xa227e45f, "consume_skb" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x2188ee41, "free_netdev" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xb7cac888, "gpiod_get_raw_value" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FB82AB0D85916B1FC3757D0");
