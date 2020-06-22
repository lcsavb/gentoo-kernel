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
	{ 0xcbe12488, "regmap_read" },
	{ 0xb8ac502f, "regmap_multi_reg_write" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xfbabfd18, "_dev_crit" },
	{ 0xc804b2f8, "ieee802154_register_hw" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0x3274c4d3, "__devm_regmap_init_spi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x2acec9a2, "ieee802154_alloc_hw" },
	{ 0x5165323f, "gpiod_set_value_cansleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0xdd8a9748, "ieee802154_xmit_complete" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x99704589, "ieee802154_rx_irqsafe" },
	{ 0x1d1190e2, "__netdev_alloc_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf8bdecef, "spi_async" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x81388c67, "ieee802154_free_hw" },
	{ 0x63748c50, "ieee802154_unregister_hw" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mcr20a");
MODULE_ALIAS("of:N*T*Cnxp,mcr20a");
MODULE_ALIAS("of:N*T*Cnxp,mcr20aC*");

MODULE_INFO(srcversion, "039CB43EF8EBE014A5E51B7");
