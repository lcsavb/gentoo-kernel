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
	{ 0xee1758f6, "get_acl" },
	{ 0xd2d595cb, "forget_cached_acl" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xb2a3e0d6, "nfs_unlink" },
	{ 0x55d89e61, "nfs_symlink" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xe0a1299b, "xdr_stream_pos" },
	{ 0xd4c1219c, "nfs_access_set_mask" },
	{ 0xbd5e8db3, "nfs_refresh_inode" },
	{ 0x7c5f22e7, "nfs_close_context" },
	{ 0xc79e40ce, "nfs_free_client" },
	{ 0x754d539c, "strlen" },
	{ 0xb6643548, "nfs_try_mount" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x377a65fd, "nfs_add_or_obtain" },
	{ 0x877079b, "posix_acl_access_xattr_handler" },
	{ 0xf559f861, "nfs_permission" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x8856b8bb, "put_nfs_open_context" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0xb8ae7858, "dput" },
	{ 0xdad7c4f6, "nfs_link" },
	{ 0x1d0e6d61, "rpc_restart_call" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x8fccbe95, "nfs_sops" },
	{ 0xbc1ad5f4, "nfs_setattr_update_inode" },
	{ 0x173fe714, "nfs_async_iocounter_wait" },
	{ 0x3f0963f7, "unregister_nfs_version" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x900ca7cb, "nfs_rmdir" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a87ca4c, "xdr_reserve_space" },
	{ 0xfd7adc4f, "nfs_alloc_fattr" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xd310388d, "make_kgid" },
	{ 0x98b0ece8, "nfs_init_timeout_values" },
	{ 0x2052af47, "rpc_delay" },
	{ 0xc7b743d, "nfs_fattr_init" },
	{ 0xbc66d5e0, "xdr_terminate_string" },
	{ 0x413f91d4, "nfs_setattr" },
	{ 0x5bb8b7c0, "nfs_fs_type" },
	{ 0x7c7c0db7, "rpc_prepare_reply_pages" },
	{ 0x30028139, "rpc_call_sync" },
	{ 0x5a3c72cf, "rpc_call_start" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1b1b6c5, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0xcafbb09e, "register_nfs_version" },
	{ 0xc5bcf465, "rpc_bind_new_program" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3603d7ce, "nfs_zap_acl_cache" },
	{ 0x9ce4187a, "nfs_getattr" },
	{ 0xc725fb8, "posix_acl_equiv_mode" },
	{ 0xbd63d456, "nfs_invalidate_atime" },
	{ 0xdcff35f8, "get_nfs_open_context" },
	{ 0x7dfb325e, "posix_acl_create" },
	{ 0x89566e9c, "nfsacl_encode" },
	{ 0x1ea4d7e5, "nfs_lookup" },
	{ 0x52bcc893, "nfs_rename" },
	{ 0xf64a389e, "nfs_put_lock_context" },
	{ 0xa351c759, "nfs_file_operations" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x55127ab6, "nfs_get_client" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5e0dfc5, "nfs_get_lock_context" },
	{ 0x3bd09d6f, "nfs_revalidate_inode" },
	{ 0x37de2088, "nfs_mkdir" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbe59e591, "nfs_create" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x1a809853, "posix_acl_from_mode" },
	{ 0xd4f6d4da, "nfsacl_decode" },
	{ 0x9c070ca, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x1f2a9970, "rpc_ntop" },
	{ 0x59127201, "nfs_post_op_update_inode" },
	{ 0x37a0cba, "kfree" },
	{ 0x2db0079f, "nfs_init_client" },
	{ 0x44cff6c0, "nfs_create_server" },
	{ 0x680db9eb, "nfs_mknod" },
	{ 0x9dea550d, "posix_acl_default_xattr_handler" },
	{ 0xa8abcded, "__tracepoint_nfs_xdr_status" },
	{ 0x349313c8, "nfs_submount" },
	{ 0x62b511f4, "forget_all_cached_acls" },
	{ 0x4c327abb, "xdr_inline_decode" },
	{ 0x23ffdeec, "nfs_access_zap_cache" },
	{ 0x7deee0e2, "xdr_write_pages" },
	{ 0x3b8bc9d4, "nfs_dentry_operations" },
	{ 0xf30d4df6, "nfs_alloc_client" },
	{ 0x5cfb6199, "nfs_writeback_update_inode" },
	{ 0x41c9d265, "nlmclnt_proc" },
	{ 0xe914e41e, "strcpy" },
	{ 0xedfe7953, "nfs_clone_server" },
};

MODULE_INFO(depends, "nfs,sunrpc,nfs_acl,lockd");


MODULE_INFO(srcversion, "1051F73129FACF6ED58DD88");
