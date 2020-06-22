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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0xc39264e4, "write_bytes_to_xdr_buf" },
	{ 0x615dab77, "crypto_stats_ahash_update" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x6cb16f6f, "gss_mech_register" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xe845e630, "crypto_ahash_final" },
	{ 0x5c279e0f, "crypto_alloc_sync_skcipher" },
	{ 0x75d0e3de, "crypto_ahash_digest" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x11ea3678, "xdr_buf_subsegment" },
	{ 0x31a89d59, "rpc_debug" },
	{ 0xfb578fc5, "memset" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xaa14636c, "crypto_shash_digest" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1f9284b5, "gss_mech_unregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x95a91cde, "crypto_ahash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xa7ead60c, "read_bytes_from_xdr_buf" },
	{ 0x6bcc1082, "xdr_process_buf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "auth_rpcgss,sunrpc");


MODULE_INFO(srcversion, "88D7F56BADBC8DC2CFE79E3");
