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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xfec2f420, "dma_async_device_register" },
	{ 0xd3c5f076, "vchan_init" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xf60e90dc, "platform_get_resource" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbfe43a2b, "vchan_tx_desc_free" },
	{ 0x517c5f9a, "vchan_tx_submit" },
	{ 0x23e4381a, "dma_async_tx_descriptor_init" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1a281859, "pv_ops" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x520630a2, "vchan_dma_desc_free_list" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x389a974c, "vchan_find_desc" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xf7b06e68, "dma_async_device_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E0CD1C5BFF73C86BC5E05D2");
