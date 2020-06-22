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
	{ 0x7129e5f8, "hex_asc" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x754d539c, "strlen" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x6f076f96, "tpm_unseal_trusted" },
	{ 0x733ed24a, "key_payload_reserve" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb3ca7259, "crypto_shash_final" },
	{ 0x2b65be73, "tpm_is_tpm2" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc3c4c6cc, "hash_algo_name" },
	{ 0xe37561bb, "tpm_send" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc5850110, "printk" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0xcd24e146, "hash_digest_size" },
	{ 0xfabf902f, "tpm_pcr_extend" },
	{ 0xaa14636c, "crypto_shash_digest" },
	{ 0xb40949c7, "user_describe" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0x96cc8295, "tpm_default_chip" },
	{ 0xc6cbbc89, "capable" },
	{ 0xe7028441, "tpm_get_random" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc8e3c98, "register_key_type" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x422ce162, "unregister_key_type" },
	{ 0x7a4497db, "kzfree" },
	{ 0x5c95c5ed, "tpm_seal_trusted" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6DEDE0341335DF52A03A4B1");
