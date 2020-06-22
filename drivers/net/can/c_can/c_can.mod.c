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
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0xfd795726, "pinctrl_select_state" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x6b7fec10, "pinctrl_lookup_state" },
	{ 0xb5167b3a, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x7e9f2b1d, "pinctrl_get" },
	{ 0x9ee11a36, "close_candev" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xe9f7f1d5, "pinctrl_pm_select_sleep_state" },
	{ 0x5be052fd, "pinctrl_put" },
	{ 0xfa94756d, "can_change_mtu" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe02ab096, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xf65ccabd, "open_candev" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "6B921597371D6FF1A1EE553");
