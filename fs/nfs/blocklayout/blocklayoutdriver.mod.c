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
	{ 0xb5f19d35, "pnfs_unregister_layoutdriver" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x803e9d14, "pnfs_generic_pg_init_write" },
	{ 0x4f7b298f, "fs_bio_set" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x64f40fde, "bio_alloc_bioset" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb46c3169, "rpc_unlink" },
	{ 0x1a77971d, "pnfs_ld_write_done" },
	{ 0xcd164005, "pnfs_error_mark_layout_for_return" },
	{ 0xb8ae7858, "dput" },
	{ 0x37d14c41, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x2ed8c741, "nfs4_mark_deviceid_unavailable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf2bfc070, "rpc_mkpipe_data" },
	{ 0xf482a867, "rpc_mkpipe_dentry" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda8356ef, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xbfc5f64b, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xc1300002, "pnfs_generic_pg_cleanup" },
	{ 0x8b4e614a, "pnfs_generic_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xaf511ad9, "xdr_init_decode_pages" },
	{ 0xc6be7b0e, "rpc_queue_upcall" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x10ee93af, "bio_add_page" },
	{ 0xbf0dcc3c, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x182a0dc7, "blkdev_get_by_path" },
	{ 0xf985ac77, "nfs_pageio_reset_write_mds" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc82f88c5, "rpc_d_lookup_sb" },
	{ 0x91429e57, "blkdev_get_by_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb5b542f5, "nfs4_put_deviceid_node" },
	{ 0x699e034f, "bio_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0xec61e148, "rpc_pipe_generic_upcall" },
	{ 0x2ae4c235, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x2ee06b98, "rpc_destroy_pipe_data" },
	{ 0x35b84b72, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x7c3aea40, "rpc_put_sb_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6ef5ef8, "pnfs_generic_pg_readpages" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8fcdce5a, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xddfeeb23, "pnfs_generic_pg_writepages" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9f331395, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4c327abb, "xdr_inline_decode" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x23d74483, "nfs_pageio_reset_read_mds" },
	{ 0x1d327df3, "nfs4_init_deviceid_node" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee4dfe03, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x40e9709a, "xdr_set_scratch_buffer" },
	{ 0x3aa4c12c, "pnfs_ld_read_done" },
	{ 0xe48af658, "__put_page" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x331489cf, "pnfs_register_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x181e27b, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "131139394D0AA9F9D6CF3C4");
