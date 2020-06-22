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
	{ 0x4f7b298f, "fs_bio_set" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa36c3a18, "blkdev_report_zones" },
	{ 0xfc1ba7f7, "submit_bio_wait" },
	{ 0x53b954a2, "up_read" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x425be464, "dm_get_device" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0x4e68e9be, "rb_next_postorder" },
	{ 0xe627f577, "blkdev_issue_flush" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xee91879b, "rb_first_postorder" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x3bce16e5, "bioset_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1462aaa, "bio_advance" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x541dfd75, "dm_register_target" },
	{ 0x5a3abdbc, "dm_kcopyd_copy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x712e52f7, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x10ee93af, "bio_add_page" },
	{ 0x2ae8b601, "zero_fill_bio_iter" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x5256d219, "bio_clone_fast" },
	{ 0xfb7f05a3, "blkdev_issue_zeroout" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x70a48bc, "dm_unregister_target" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x699e034f, "bio_put" },
	{ 0x58e3306d, "bit_wait_io" },
	{ 0x804ec939, "bioset_exit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4f0eb863, "blkdev_reset_zones" },
	{ 0x2ae4c235, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x474a0374, "unregister_shrinker" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xa75b4483, "dm_accept_partial_bio" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x2d79cacd, "register_shrinker" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x6447e654, "dm_put_device" },
	{ 0x51305c7e, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8792128, "blkdev_nr_zones" },
	{ 0xfbc4f89e, "io_schedule_timeout" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x181e27b, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-mod");


MODULE_INFO(srcversion, "5FB9034BB8C42C1511B22C9");
