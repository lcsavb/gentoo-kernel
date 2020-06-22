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
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xda06fac, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x23e4381a, "dma_async_tx_descriptor_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1fa1d95c, "sha256_zero_message_hash" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x1a281859, "pv_ops" },
	{ 0x13317307, "devm_kasprintf" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfec2f420, "dma_async_device_register" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xfa372803, "dmaengine_unmap_put" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x2e76b019, "misc_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x743aa7a8, "device_get_dma_attr" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x69862414, "dma_run_dependencies" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4261f6f7, "pci_select_bars" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xca155594, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x946dd559, "sha224_zero_message_hash" },
	{ 0x7b5a4926, "sha1_zero_message_hash" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0xf7b06e68, "dma_async_device_unregister" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x73cd3bb6, "firmware_request_nowarn" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x8dd80ad2, "dma_pool_create" },
	{ 0x867234, "misc_deregister" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xb825523f, "devm_platform_ioremap_resource" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d00001537sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001456sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001468sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001486sv*sd*bc*sc*i*");
MODULE_ALIAS("acpi*:AMDI0C00:*");

MODULE_INFO(srcversion, "B34930D9E10EA8DB0FDE72F");
