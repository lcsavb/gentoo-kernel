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
	{ 0x735dd09f, "unregister_md_personality" },
	{ 0x84723080, "register_md_personality" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0xcf924e71, "md_unregister_thread" },
	{ 0x21dd6a18, "blk_queue_max_write_zeroes_sectors" },
	{ 0x94dcfea7, "blk_queue_max_write_same_sectors" },
	{ 0x87a6d5d0, "mddev_init_writes_pending" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc58d19cb, "md_register_thread" },
	{ 0x3bce16e5, "bioset_init" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x248e52d, "md_allow_write" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xf735eaf0, "md_bitmap_close_sync" },
	{ 0xe6c8253b, "md_bitmap_cond_end_sync" },
	{ 0x58a04e8, "md_bitmap_start_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeec54807, "md_flush_request" },
	{ 0xa721722d, "md_write_start" },
	{ 0xb1875a54, "md_wait_for_blocked_rdev" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x8bf92df1, "bio_alloc_mddev" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x3de1ffe5, "md_bitmap_startwrite" },
	{ 0xb39fc746, "bio_devname" },
	{ 0xfc1ba7f7, "submit_bio_wait" },
	{ 0x79b63245, "bio_trim" },
	{ 0x9e657884, "rdev_clear_badblocks" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3d900405, "md_check_recovery" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf39ba10e, "bio_copy_data" },
	{ 0x10ee93af, "bio_add_page" },
	{ 0x1e9d14c, "bio_reset" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc8dfc131, "bio_chain" },
	{ 0x58605230, "bio_split" },
	{ 0xfb578fc5, "memset" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x5256d219, "bio_clone_fast" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9e363738, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9974f22f, "md_integrity_register" },
	{ 0x219b8dbe, "__trace_note_message" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x712e52f7, "current_task" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x804ec939, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x416c7d7d, "badblocks_check" },
	{ 0xc32347f5, "md_done_sync" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8cdb17f2, "md_bitmap_end_sync" },
	{ 0x2b0a0253, "md_error" },
	{ 0x6b82f39e, "rdev_set_badblocks" },
	{ 0xe5aedfd2, "sync_page_io" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0xd5bbdf39, "disk_stack_limits" },
	{ 0x1ca2179, "md_integrity_add_rdev" },
	{ 0x7224ac98, "kernfs_notify" },
	{ 0xed633a11, "md_set_array_sectors" },
	{ 0xa3ac1e56, "md_bitmap_resize" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdcd98c5c, "md_wakeup_thread" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0x181e27b, "bio_associate_blkg" },
	{ 0x1452aecd, "md_bitmap_unplug" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x699e034f, "bio_put" },
	{ 0x4f710091, "bio_free_pages" },
	{ 0x605336af, "md_write_end" },
	{ 0xeab9b266, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "BD787859DBA566432062EEC");
