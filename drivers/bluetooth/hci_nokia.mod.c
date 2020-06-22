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
	{ 0x95966351, "__serdev_device_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x320faa8b, "btbcm_set_bdaddr" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x8790ad6a, "__hci_cmd_sync" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xb4f31a74, "hci_uart_tx_wakeup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x498c2a33, "serdev_device_get_tiocm" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x90c13616, "serdev_device_set_baudrate" },
	{ 0x107fe12, "serdev_device_write_flush" },
	{ 0xc51de9bb, "gpiod_get_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9dac7860, "serdev_device_set_flow_control" },
	{ 0x4c9d06bd, "serdev_device_set_tiocm" },
	{ 0x815588a6, "clk_enable" },
	{ 0x809319d2, "hci_uart_register_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x67e1c81f, "gpiod_get_value" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0x5ecb3b7, "skb_queue_purge" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x29361773, "complete" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x7b92e35d, "h4_recv_buf" },
	{ 0x190b4cc, "hci_recv_frame" },
	{ 0xcc0bdfb8, "skb_queue_tail" },
	{ 0xffea6bc9, "skb_put" },
	{ 0xaaf4bc15, "__skb_pad" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x31d5e7cb, "serdev_device_wait_until_sent" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xa99d4b, "skb_dequeue" },
	{ 0x12ad7263, "hci_uart_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btbcm,bluetooth,hci_uart");


MODULE_INFO(srcversion, "FE973C62BF499791BE2C2A4");
