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
	{ 0x2a83ff05, "sdio_writeb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x1402737e, "ieee80211_queue_work" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x633f042c, "wl1251_free_hw" },
	{ 0xf8dbe40b, "sdio_writeb_readb" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x13243d4b, "wl1251_get_platform_data" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xb6c47f70, "wl1251_init_ieee80211" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xed238834, "devm_gpio_request" },
	{ 0x116a8bbf, "wl1251_alloc_hw" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core,mac80211,wl1251");

MODULE_ALIAS("sdio:c*v0097d9066*");

MODULE_INFO(srcversion, "11E49F5EBA8A10C2D3D8D8C");
