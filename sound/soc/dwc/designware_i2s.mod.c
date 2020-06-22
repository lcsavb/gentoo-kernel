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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xe3ee98d9, "devm_snd_dmaengine_pcm_register" },
	{ 0xdd1dcb0d, "snd_pcm_lib_preallocate_free_for_all" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcdb57027, "snd_soc_set_runtime_hwparams" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x8d29d5dd, "snd_pcm_lib_free_pages" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x9db2fc12, "snd_pcm_lib_malloc_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfeaf52af, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff8cf50, "devm_clk_get" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7ab5cc5c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xe484e35f, "ioread32" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core");


MODULE_INFO(srcversion, "8EAFED1CE22A3717336844F");
