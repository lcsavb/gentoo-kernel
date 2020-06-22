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
	{ 0x38e46431, "mempool_exit" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0x425be464, "dm_get_device" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xea7b8962, "dm_table_get_md" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x615dab77, "crypto_stats_ahash_update" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x541dfd75, "dm_register_target" },
	{ 0x6c23f4ef, "free_rs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x433612e3, "dm_disk" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe845e630, "crypto_ahash_final" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0xfb578fc5, "memset" },
	{ 0x712e52f7, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x70a48bc, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x4abbabbe, "dm_bufio_client_create" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e3c84b4, "generic_make_request" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xf99e621b, "crypto_req_done" },
	{ 0xdfac1770, "bio_endio" },
	{ 0xe69414b5, "kobject_uevent_env" },
	{ 0x38861500, "init_rs_gfp" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0xb15c1ff4, "dm_bio_from_per_bio_data" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x96848186, "scnprintf" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x6447e654, "dm_put_device" },
	{ 0x51305c7e, "dm_per_bio_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0x65f24eea, "decode_rs8" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0x181e27b, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-bufio,dm-mod,reed_solomon");


MODULE_INFO(srcversion, "CB150DEDA27F8C68F318BD3");
