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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xb5537d7, "blkdev_issue_discard" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4f7b298f, "fs_bio_set" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7d269b6f, "unregister_xenbus_watch" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0xb824c9c3, "xenbus_map_ring_valloc" },
	{ 0xa8549d0, "gnttab_map_refs" },
	{ 0x349cba85, "strchr" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x1c634b1a, "xenbus_dev_error" },
	{ 0x7270d20d, "xenbus_dev_is_online" },
	{ 0x6a3cd6eb, "gnttab_alloc_pages" },
	{ 0x28ec677c, "gnttab_unmap_refs" },
	{ 0x4b931968, "xen_features" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xe585ecb2, "filemap_write_and_wait" },
	{ 0x55dc66ab, "gnttab_unmap_refs_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6417e33b, "invalidate_inode_pages2" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0x2910e0f1, "gnttab_unmap_refs_async" },
	{ 0xa028e565, "xenbus_unmap_ring_vfree" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xebef2d24, "gnttab_free_pages" },
	{ 0x712e52f7, "current_task" },
	{ 0xc145164f, "__xenbus_register_backend" },
	{ 0xc1b1b6c5, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x10ee93af, "bio_add_page" },
	{ 0xd6ed8008, "xenbus_watch_pathfmt" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x91429e57, "blkdev_get_by_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x699e034f, "bio_put" },
	{ 0x77989b7e, "device_create_file" },
	{ 0xc2c5802, "work_busy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0458ccb, "xenbus_strstate" },
	{ 0x681e3cee, "module_put" },
	{ 0x2ae4c235, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x9f984513, "strrchr" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x35b84b72, "blkdev_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b04668e, "bind_interdomain_evtchn_to_irqhandler" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0x36a099f6, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfa0b1c44, "xenbus_switch_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x7f97458, "xenbus_dev_fatal" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xca9360b5, "rb_next" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0x181e27b, "bio_associate_blkg" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DD6617458D34E4CE76976B6");
