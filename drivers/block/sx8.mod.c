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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x371ade7, "blk_queue_segment_boundary" },
	{ 0xde8edf5f, "blk_queue_max_segments" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0xfb578fc5, "memset" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x29361773, "complete" },
	{ 0x55760da8, "blk_mq_stop_hw_queues" },
	{ 0x1a281859, "pv_ops" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x712296f6, "blk_rq_map_sg" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x1b8dfc22, "blk_mq_start_hw_queues" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xda96d4fc, "blk_mq_end_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf0d7e3e4, "blk_mq_tag_to_rq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xf6c921db, "blk_execute_rq_nowait" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x210c8b95, "blk_mq_alloc_request" },
	{ 0xc5850110, "printk" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "366D86C744E5B7C86A9FA24");
