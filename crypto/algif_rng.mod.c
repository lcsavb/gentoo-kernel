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
	{ 0x4257e97c, "sock_no_sendpage" },
	{ 0x1182e7d9, "sock_no_mmap" },
	{ 0xef4d20bb, "sock_no_sendmsg" },
	{ 0xa5be5767, "sock_no_getsockopt" },
	{ 0x5a4ce033, "sock_no_setsockopt" },
	{ 0xcd3ea026, "sock_no_shutdown" },
	{ 0xed8c158, "sock_no_listen" },
	{ 0xab207a5c, "sock_no_ioctl" },
	{ 0xc9b258df, "sock_no_getname" },
	{ 0x2981dd0d, "sock_no_accept" },
	{ 0xe67fdf83, "sock_no_socketpair" },
	{ 0xc9883dcc, "sock_no_connect" },
	{ 0x453da752, "sock_no_bind" },
	{ 0xfbe0b7aa, "af_alg_release" },
	{ 0x591cc32b, "af_alg_unregister_type" },
	{ 0xc2e5dff3, "af_alg_register_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6fb8948f, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x40bb7faf, "crypto_stats_rng_generate" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0x9002cd06, "crypto_alloc_rng" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x941200b9, "crypto_rng_reset" },
	{ 0x3a09bb53, "af_alg_release_parent" },
	{ 0x4e68d5a9, "sock_kfree_s" },
	{ 0xd1ad653b, "sock_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "972716680A115532A2F8129");
