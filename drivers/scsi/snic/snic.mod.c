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
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x128c3351, "scsi_remove_target" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0xcb1d4a49, "scsi_flush_work" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xe19a8bb5, "scsi_scan_target" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3d706090, "scsi_print_command" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x7533a30b, "device_del" },
	{ 0x741b0126, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x45cd73e1, "device_add" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x75e47ded, "scsi_target_unblock" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1953c958, "mempool_create" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xedc03953, "iounmap" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x569d160, "scsi_target_block" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x75b94a14, "scsi_dma_map" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001137d00000046sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CC64DD76505C0310AE79880");
