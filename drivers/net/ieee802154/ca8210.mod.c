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
	{ 0xc804b2f8, "ieee802154_register_hw" },
	{ 0x8581fb1, "clk_register_fixed_rate" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe990052, "gpio_free" },
	{ 0x15539bd9, "gpiod_to_irq" },
	{ 0xc6e87f40, "gpiod_direction_output_raw" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2acec9a2, "ieee802154_alloc_hw" },
	{ 0x135a49ce, "ieee802154_hdr_peek_addrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9294368c, "_dev_notice" },
	{ 0xddac10ef, "ieee802154_wake_queue" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0xdd8a9748, "ieee802154_xmit_complete" },
	{ 0x99704589, "ieee802154_rx_irqsafe" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x322a775d, "ieee802154_hdr_push" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x81388c67, "ieee802154_free_hw" },
	{ 0x63748c50, "ieee802154_unregister_hw" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7757b51a, "clk_unregister" },
	{ 0x29361773, "complete" },
	{ 0x17475388, "_dev_warn" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xc5850110, "printk" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xf8bdecef, "spi_async" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xfbabfd18, "_dev_crit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154,ieee802154");

MODULE_ALIAS("of:N*T*Ccascoda,ca8210");
MODULE_ALIAS("of:N*T*Ccascoda,ca8210C*");

MODULE_INFO(srcversion, "5042B296836BAC4F3013FC0");
