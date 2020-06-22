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
	{ 0x2d3385d3, "system_wq" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0x1b8dfc22, "blk_mq_start_hw_queues" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x54c30a, "blk_mq_requeue_request" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x51bdf9e9, "blk_queue_io_opt" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x9eeb5e7c, "blk_mq_tagset_busy_iter" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x2922f141, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xff3895c8, "blk_mq_complete_request" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x1a281859, "pv_ops" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xa14bde6a, "blk_mq_unique_tag" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xde8edf5f, "blk_queue_max_segments" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xf70239ad, "pci_enable_pcie_error_reporting" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x55760da8, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xad12e7a6, "kmem_cache_size" },
	{ 0xb01b9d62, "pci_find_capability" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0x712296f6, "blk_rq_map_sg" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xda96d4fc, "blk_mq_end_request" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa3cba2a9, "pci_disable_pcie_error_reporting" },
	{ 0xcb8571b8, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x764f35f1, "dma_direct_sync_single_for_device" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x20a69ede, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B39d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E5D7C468372EF04152A71C1");
