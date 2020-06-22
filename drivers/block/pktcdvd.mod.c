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
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x867234, "misc_deregister" },
	{ 0x804ec939, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x6d623b61, "proc_mkdir" },
	{ 0x33650c48, "class_destroy" },
	{ 0x2e76b019, "misc_register" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3bce16e5, "bioset_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xc1b1b6c5, "freezing_slow_path" },
	{ 0x3b8372b3, "bio_list_copy_data" },
	{ 0xf51b30b, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x51dde20f, "set_user_nice" },
	{ 0x712e52f7, "current_task" },
	{ 0x10ee93af, "bio_add_page" },
	{ 0x1e9d14c, "bio_reset" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xb39fc746, "bio_devname" },
	{ 0x181e27b, "bio_associate_blkg" },
	{ 0x5256d219, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x22f840e, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc8dfc131, "bio_chain" },
	{ 0x58605230, "bio_split" },
	{ 0x858bbf12, "blk_queue_split" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0xf1493479, "bd_set_size" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xe629aceb, "device_create" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x542a5c87, "proc_create_single_data" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0x47c245e6, "set_blocksize" },
	{ 0x36a099f6, "__module_get" },
	{ 0x9b77eeb7, "bdevname" },
	{ 0xa14bc54e, "blkdev_get" },
	{ 0x4e3db7af, "bdget" },
	{ 0xd2ab9151, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xf3d9f7ce, "__blkdev_driver_ioctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x681e3cee, "module_put" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xa1477c99, "remove_proc_entry" },
	{ 0x35b84b72, "blkdev_put" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x699e034f, "bio_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x768eed8c, "blk_rq_map_kern" },
	{ 0x41d7f5a3, "blk_put_request" },
	{ 0xda4d494, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x9e34b64e, "blk_get_request" },
	{ 0x40120314, "single_open" },
	{ 0xe45fa038, "kobject_put" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0xff98fde2, "kobject_init_and_add" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cdrom");


MODULE_INFO(srcversion, "F7ED0C59BE5A77176529C3F");
