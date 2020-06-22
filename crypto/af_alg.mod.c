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
	{ 0x44226a8, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xd5689792, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0xab207a5c, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1a281859, "pv_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0x58973956, "sock_no_recvmsg" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0x8f9f9604, "sk_alloc" },
	{ 0x712e52f7, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x30720bb, "iov_iter_get_pages" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xbfd18f3b, "sock_wake_async" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4e68d5a9, "sock_kfree_s" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x681e3cee, "module_put" },
	{ 0x399bb8c0, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb6285377, "proto_register" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a91fbff, "sock_register" },
	{ 0x3b198f27, "proto_unregister" },
	{ 0x6504c171, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd1ad653b, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xef4d20bb, "sock_no_sendmsg" },
	{ 0xccb8a35b, "sock_kzfree_s" },
	{ 0xb2b2c4c4, "iov_iter_advance" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe48af658, "__put_page" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9DBFB01413EE7525342FE69");
