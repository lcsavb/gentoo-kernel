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
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x71301392, "param_get_int" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xa295bae7, "badblocks_clear" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x416c7d7d, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xd2237016, "radix_tree_delete_item" },
	{ 0x977fb466, "blk_mq_start_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0x242c867b, "config_item_put" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x650b0258, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5e2a01ba, "blk_queue_chunk_sectors" },
	{ 0xff3895c8, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x58eff1c6, "blk_alloc_queue_node" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x8f6ccf4d, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x712e52f7, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xefe37f23, "blk_queue_max_discard_sectors" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0xf0371db3, "blk_mq_free_tag_set" },
	{ 0xffb7c514, "ida_free" },
	{ 0x55760da8, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe3e38d53, "configfs_register_subsystem" },
	{ 0xc1e761a9, "blk_revalidate_disk_zones" },
	{ 0x876d2cf2, "blk_mq_start_stopped_hw_queues" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xd811fa6f, "kmem_cache_alloc_node_trace" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0xef0a0078, "badblocks_show" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0x8f6ab57e, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27716ef8, "badblocks_init" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a10507b, "blk_mq_alloc_tag_set" },
	{ 0x15906367, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x26c9f806, "blk_queue_required_elevator_features" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xda96d4fc, "blk_mq_end_request" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcb8571b8, "blk_queue_write_cache" },
	{ 0xcb278750, "badblocks_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x82c87ad5, "nr_online_nodes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xeb68d4d, "badblocks_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0x77bc13a0, "strim" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x4174c002, "param_ops_ulong" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x86891d7e, "config_group_init" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "configfs");


MODULE_INFO(srcversion, "F451084BB0CC4A65A53D5EC");
