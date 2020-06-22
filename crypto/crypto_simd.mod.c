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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x6fdd8e5, "crypto_alloc_skcipher" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x95803bd3, "cryptd_free_skcipher" },
	{ 0x52ad9379, "crypto_unregister_skciphers" },
	{ 0x64645233, "cryptd_free_aead" },
	{ 0x556a69b0, "cryptd_skcipher_queued" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4614f20a, "crypto_register_skciphers" },
	{ 0x93e6b5e0, "crypto_unregister_skcipher" },
	{ 0x17b10810, "cryptd_aead_queued" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0xe8f4e712, "crypto_register_skcipher" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0x26abcadf, "cryptd_alloc_skcipher" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92f592f1, "cryptd_skcipher_child" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x5657726c, "crypto_unregister_aeads" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xc8414918, "crypto_alloc_aead" },
	{ 0xe0d782ed, "crypto_register_aeads" },
	{ 0x37a0cba, "kfree" },
	{ 0x58af7efd, "crypto_unregister_aead" },
	{ 0x2ab986f0, "crypto_register_aead" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0xcaef05ba, "cryptd_aead_child" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x934b399f, "cryptd_alloc_aead" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cryptd");


MODULE_INFO(srcversion, "3305741DF4314BB5351FF6F");
