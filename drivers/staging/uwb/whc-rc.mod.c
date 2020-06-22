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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x4e64b21b, "umc_driver_unregister" },
	{ 0xf0a28b56, "__umc_driver_register" },
	{ 0x246b9cbb, "uwb_rc_neh_grok" },
	{ 0x4d137277, "uwb_rc_add" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x61223358, "uwb_rc_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e307da8, "uwb_rc_reset_all" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe484e35f, "ioread32" },
	{ 0x70dc89ef, "umc_controller_reset" },
	{ 0x7ad2875a, "whci_wait_for" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x18c895b7, "uwb_rc_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f04c11a, "uwb_rc_rm" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xc5bfd3a2, "uwb_rc_pre_reset" },
	{ 0xaa5d0c, "uwb_rc_post_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "umc,uwb,whci");

MODULE_ALIAS("pci:v*d*sv*sd*bc0Dsc10i10*");

MODULE_INFO(srcversion, "47D2EBB340E8F63CABF2CCE");
