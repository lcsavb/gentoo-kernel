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
	{ 0x373bc726, "af_alg_poll" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xfbe0b7aa, "af_alg_release" },
	{ 0x591cc32b, "af_alg_unregister_type" },
	{ 0xc2e5dff3, "af_alg_register_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf99e621b, "crypto_req_done" },
	{ 0xc99192ea, "af_alg_wmem_wakeup" },
	{ 0x54e374f1, "af_alg_free_resources" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0xf0438240, "af_alg_async_cb" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xdc477ad3, "af_alg_count_tsgl" },
	{ 0xd2ee86b7, "af_alg_get_rsgl" },
	{ 0x32528a34, "af_alg_alloc_areq" },
	{ 0xca456ba5, "af_alg_wait_for_data" },
	{ 0x15f1a40, "af_alg_sendpage" },
	{ 0x7ca7dd2d, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x44226a8, "release_sock" },
	{ 0x98924e78, "lock_sock_nested" },
	{ 0x6fdd8e5, "crypto_alloc_skcipher" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xd1ad653b, "sock_kmalloc" },
	{ 0x3a09bb53, "af_alg_release_parent" },
	{ 0x4e68d5a9, "sock_kfree_s" },
	{ 0xccb8a35b, "sock_kzfree_s" },
	{ 0x4c5a287b, "af_alg_pull_tsgl" },
	{ 0x5c6f663f, "af_alg_sendmsg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "F739A4E0570052474C97DF8");
