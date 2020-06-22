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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbcb92b16, "cw1200_irq_handler" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xa25a1b78, "sdio_claim_irq" },
	{ 0x5ac272d3, "gpio_to_desc" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x69c572af, "cw1200_core_release" },
	{ 0xe7892f7f, "cw1200_can_suspend" },
	{ 0xc5850110, "printk" },
	{ 0xc6e87f40, "gpiod_direction_output_raw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x696afc99, "sdio_f0_writeb" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0xc91dbfe1, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8920e4d3, "sdio_align_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbba1bf59, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x97a34c15, "gpiod_set_raw_value" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0xc62adc81, "cw1200_core_probe" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "cw1200_core,mmc_core");


MODULE_INFO(srcversion, "6CF9CC03C2CF1FE7BA3797E");
