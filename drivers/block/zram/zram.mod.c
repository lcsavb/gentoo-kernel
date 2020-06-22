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
	{ 0x3d8baf3b, "zs_huge_class_size" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc341ae6d, "zs_map_object" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x53b954a2, "up_read" },
	{ 0x31c96942, "blk_cleanup_queue" },
	{ 0x51bdf9e9, "blk_queue_io_opt" },
	{ 0x27864d57, "memparse" },
	{ 0x754d539c, "strlen" },
	{ 0xc69b7ee5, "zs_destroy_pool" },
	{ 0x24d92314, "generic_end_io_acct" },
	{ 0xb29533ee, "zs_malloc" },
	{ 0xedf2391, "blk_queue_io_min" },
	{ 0x56470118, "__warn_printk" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x21dd6a18, "blk_queue_max_write_zeroes_sectors" },
	{ 0x5da67adc, "zs_compact" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xff082f2d, "revalidate_disk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb41c7a4c, "fsync_bdev" },
	{ 0x8a654ea1, "__alloc_disk_node" },
	{ 0x958df3ac, "zs_free" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xd2ab9151, "blk_alloc_queue" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xefe37f23, "blk_queue_max_discard_sectors" },
	{ 0xc3ea7977, "del_gendisk" },
	{ 0x1b13d538, "class_unregister" },
	{ 0x56dbf27e, "__cpuhp_state_add_instance" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x5792f848, "strlcpy" },
	{ 0xbcf1f0e6, "zs_create_pool" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xce807a25, "up_write" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0x8711fc21, "generic_start_io_acct" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdfac1770, "bio_endio" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd47912f9, "blk_queue_flag_clear" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb269258, "blk_queue_flag_set" },
	{ 0xa916b694, "strnlen" },
	{ 0x296ef733, "blk_queue_make_request" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x8f6ab57e, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3bfd6888, "put_disk" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xe8b3f0d8, "__cpuhp_state_remove_instance" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbe56bc2, "zs_get_total_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe071d05d, "zs_pool_stats" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc246ddd2, "device_add_disk" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x32774272, "crypto_alloc_base" },
	{ 0xf8fd1b8d, "blk_queue_logical_block_size" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x20978fb9, "idr_find" },
	{ 0x199635a2, "bdget_disk" },
	{ 0x630ab4ec, "bdput" },
	{ 0x924c46f8, "zs_unmap_object" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xb774f7c2, "page_endio" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "525A730EAE36D16D5B35996");
