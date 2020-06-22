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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x54c30a, "blk_mq_requeue_request" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0xd0790278, "bd_start_claiming" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0xa3f9eb19, "blk_mq_unfreeze_queue" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0xedf2391, "blk_queue_io_min" },
	{ 0x56470118, "__warn_printk" },
	{ 0xad1194f6, "file_path" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc243c261, "vfs_fsync" },
	{ 0x47f7121f, "blk_mq_freeze_queue" },
	{ 0x21dd6a18, "blk_queue_max_write_zeroes_sectors" },
	{ 0xff3895c8, "blk_mq_complete_request" },
	{ 0x9582b977, "path_get" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x7f31f164, "invalidate_bdev" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x4e294a39, "vfs_iter_write" },
	{ 0x2e76b019, "misc_register" },
	{ 0x71523234, "iov_iter_bvec" },
	{ 0x78ba4096, "set_device_ro" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x9459acda, "kthread_associate_blkcg" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xefe37f23, "blk_queue_max_discard_sectors" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0x2ae8b601, "zero_fill_bio_iter" },
	{ 0x906ab39, "__kthread_init_worker" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x928fc44, "blk_register_region" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x43a0ed9c, "blk_update_request" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0x7419e1ca, "fput" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0xc6cbbc89, "capable" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xf1493479, "bd_set_size" },
	{ 0xf73f16b9, "kthread_queue_work" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0x5066b9e, "sync_blockdev" },
	{ 0x8f6ab57e, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3f7a850f, "bd_abort_claiming" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x66edc9c2, "vfs_iter_read" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc31dd52f, "bdgrab" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6bebec6d, "path_put" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xda96d4fc, "blk_mq_end_request" },
	{ 0x36a099f6, "__module_get" },
	{ 0xb7a0a87f, "blkdev_reread_part" },
	{ 0xcb8571b8, "blk_queue_write_cache" },
	{ 0x82fb8e6c, "get_disk_and_module" },
	{ 0x2aaf7aa5, "__blkdev_reread_part" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfaafd4ce, "__sb_end_write" },
	{ 0x51dde20f, "set_user_nice" },
	{ 0x8edd97ea, "fget" },
	{ 0x9de36ac0, "__sb_start_write" },
	{ 0x4515a34e, "kthread_flush_worker" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xbe4dde80, "kill_bdev" },
	{ 0xb0e602eb, "memmove" },
	{ 0x47c245e6, "set_blocksize" },
	{ 0x92d9ed3a, "vfs_getattr" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x867234, "misc_deregister" },
	{ 0x630ab4ec, "bdput" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DEC007D3177D1AEA30406AE");
