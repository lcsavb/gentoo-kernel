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
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xe10cfc9a, "register_candev" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xdec467d2, "napi_disable" },
	{ 0xa085d534, "napi_schedule_prep" },
	{ 0x78ca5e11, "alloc_can_err_skb" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x9d6ff7db, "can_bus_off" },
	{ 0x9ee11a36, "close_candev" },
	{ 0x5c6ce521, "netif_tx_wake_queue" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcba9b854, "alloc_candev_mqs" },
	{ 0x174c088b, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6f8688b6, "free_candev" },
	{ 0xe9f7f1d5, "pinctrl_pm_select_sleep_state" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfa94756d, "can_change_mtu" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x94e7f5f2, "fwnode_property_read_u32_array" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc0154297, "unregister_candev" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xa8b73cba, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xd34815c6, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xb1b9a187, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe02ab096, "pinctrl_pm_select_default_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xf65ccabd, "open_candev" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0xc24a36af, "dev_fwnode" },
	{ 0x391901a1, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3123d94f, "can_get_echo_skb" },
	{ 0xf0fb1a95, "can_put_echo_skb" },
	{ 0xfcf3c007, "can_free_echo_skb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "can-dev");


MODULE_INFO(srcversion, "7860C7A59C696AFC28C4D72");
