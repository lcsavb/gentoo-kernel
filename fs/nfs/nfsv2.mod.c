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
	{ 0xb2a3e0d6, "nfs_unlink" },
	{ 0x55d89e61, "nfs_symlink" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0xbd5e8db3, "nfs_refresh_inode" },
	{ 0x7c5f22e7, "nfs_close_context" },
	{ 0xc79e40ce, "nfs_free_client" },
	{ 0xb6643548, "nfs_try_mount" },
	{ 0xff6a759c, "from_kuid_munged" },
	{ 0xf559f861, "nfs_permission" },
	{ 0xdad7c4f6, "nfs_link" },
	{ 0x556f48e2, "init_user_ns" },
	{ 0x4f3b9efc, "nfs_instantiate" },
	{ 0x8fccbe95, "nfs_sops" },
	{ 0xbc1ad5f4, "nfs_setattr_update_inode" },
	{ 0x3f0963f7, "unregister_nfs_version" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x1a281859, "pv_ops" },
	{ 0x900ca7cb, "nfs_rmdir" },
	{ 0x8a87ca4c, "xdr_reserve_space" },
	{ 0xfd7adc4f, "nfs_alloc_fattr" },
	{ 0xbc46e78a, "from_kgid_munged" },
	{ 0xd310388d, "make_kgid" },
	{ 0xc7b743d, "nfs_fattr_init" },
	{ 0xbc66d5e0, "xdr_terminate_string" },
	{ 0x413f91d4, "nfs_setattr" },
	{ 0x5bb8b7c0, "nfs_fs_type" },
	{ 0x7c7c0db7, "rpc_prepare_reply_pages" },
	{ 0x30028139, "rpc_call_sync" },
	{ 0x5a3c72cf, "rpc_call_start" },
	{ 0xc5850110, "printk" },
	{ 0xcafbb09e, "register_nfs_version" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9ce4187a, "nfs_getattr" },
	{ 0xbd63d456, "nfs_invalidate_atime" },
	{ 0x26884ff7, "nfs_alloc_fhandle" },
	{ 0x1ea4d7e5, "nfs_lookup" },
	{ 0x52bcc893, "nfs_rename" },
	{ 0xa351c759, "nfs_file_operations" },
	{ 0xcbc0df1a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37de2088, "nfs_mkdir" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbe59e591, "nfs_create" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9c070ca, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x37a0cba, "kfree" },
	{ 0x2db0079f, "nfs_init_client" },
	{ 0x44cff6c0, "nfs_create_server" },
	{ 0x680db9eb, "nfs_mknod" },
	{ 0xa8abcded, "__tracepoint_nfs_xdr_status" },
	{ 0x349313c8, "nfs_submount" },
	{ 0x4c327abb, "xdr_inline_decode" },
	{ 0x7deee0e2, "xdr_write_pages" },
	{ 0x3b8bc9d4, "nfs_dentry_operations" },
	{ 0xf30d4df6, "nfs_alloc_client" },
	{ 0x5cfb6199, "nfs_writeback_update_inode" },
	{ 0x41c9d265, "nlmclnt_proc" },
	{ 0xedfe7953, "nfs_clone_server" },
};

MODULE_INFO(depends, "nfs,sunrpc,lockd");


MODULE_INFO(srcversion, "D5997FA977380B1F041522F");
