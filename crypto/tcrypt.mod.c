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
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0xe845e630, "crypto_ahash_final" },
	{ 0x95a91cde, "crypto_ahash_setkey" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6fdd8e5, "crypto_alloc_skcipher" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0x75d0e3de, "crypto_ahash_digest" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0xf99e621b, "crypto_req_done" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc8414918, "crypto_alloc_aead" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x615dab77, "crypto_stats_ahash_update" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F24793B7FB45B28016EA8DC");
