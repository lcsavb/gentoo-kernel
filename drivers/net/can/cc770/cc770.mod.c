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
	{ 0xf163231, "netdev_info" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x3861cb79, "netif_rx" },
	{ 0x9ee11a36, "close_candev" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xc5850110, "printk" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xfa94756d, "can_change_mtu" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xf65ccabd, "open_candev" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "C049D9E7C24A4EEC2F5FD32");
