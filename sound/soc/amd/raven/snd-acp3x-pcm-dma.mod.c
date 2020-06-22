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
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x5536d154, "snd_pcm_lib_default_mmap" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xfb578fc5, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xf5151f47, "snd_soc_rtdcom_lookup" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "58D9B66037BDACCCE41AB12");
