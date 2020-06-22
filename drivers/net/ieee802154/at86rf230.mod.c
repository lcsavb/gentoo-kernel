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
	{ 0x42a508e0, "_dev_info" },
	{ 0xc804b2f8, "ieee802154_register_hw" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x7856b2f4, "gpiod_set_raw_value_cansleep" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0x2acec9a2, "ieee802154_alloc_hw" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xcbe12488, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x81388c67, "ieee802154_free_hw" },
	{ 0x63748c50, "ieee802154_unregister_hw" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x17475388, "_dev_warn" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xddac10ef, "ieee802154_wake_queue" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd8a9748, "ieee802154_xmit_complete" },
	{ 0x99704589, "ieee802154_rx_irqsafe" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf8bdecef, "spi_async" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "F7E407A23EA079EB04CB647");
