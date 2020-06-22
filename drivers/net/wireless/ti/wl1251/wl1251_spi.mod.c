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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x1402737e, "ieee80211_queue_work" },
	{ 0xfe019b22, "regulator_disable" },
	{ 0xba55d23e, "crc7_be" },
	{ 0x633f042c, "wl1251_free_hw" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xcebe7641, "spi_setup" },
	{ 0xc5850110, "printk" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x342bd216, "devm_gpio_request_one" },
	{ 0xe8799010, "spi_sync" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x79aea77b, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xb6c47f70, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0x31eea9de, "ieee80211_free_hw" },
	{ 0x116a8bbf, "wl1251_alloc_hw" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x72c0e387, "regulator_enable" },
};

MODULE_INFO(depends, "mac80211,crc7,wl1251");


MODULE_INFO(srcversion, "30C65F18F1365C8B761DE56");
