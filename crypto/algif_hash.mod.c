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
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xab207a5c, "sock_no_ioctl" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xfbe0b7aa, "af_alg_release" },
	{ 0x591cc32b, "af_alg_unregister_type" },
	{ 0xc2e5dff3, "af_alg_register_type" },
	{ 0x5608d264, "af_alg_make_sg" },
	{ 0xb2b2c4c4, "iov_iter_advance" },
	{ 0xad496b73, "af_alg_free_sg" },
	{ 0x75d0e3de, "crypto_ahash_digest" },
	{ 0x615dab77, "crypto_stats_ahash_update" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0x7213fd12, "crypto_ahash_finup" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe845e630, "crypto_ahash_final" },
	{ 0xfb578fc5, "memset" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x95a91cde, "crypto_ahash_setkey" },
	{ 0xf99e621b, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd1ad653b, "sock_kmalloc" },
	{ 0x3a09bb53, "af_alg_release_parent" },
	{ 0x4e68d5a9, "sock_kfree_s" },
	{ 0xccb8a35b, "sock_kzfree_s" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa002534c, "af_alg_accept" },
	{ 0x44226a8, "release_sock" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "11F45587F259269E6B3F229");
