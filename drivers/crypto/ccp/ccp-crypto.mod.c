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
	{ 0x77e9eb37, "aes_encrypt" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x89ae7aa0, "rsa_parse_pub_key" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x1f276852, "crypto_register_akcipher" },
	{ 0x162234e3, "crypto_ablkcipher_type" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xab03847f, "ccp_enqueue_cmd" },
	{ 0x4773b60, "ccp_present" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x5c279e0f, "crypto_alloc_sync_skcipher" },
	{ 0x3a1a3979, "ccp_version" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xaa14636c, "crypto_shash_digest" },
	{ 0x9166fada, "strncpy" },
	{ 0x6edaea66, "crypto_register_ahash" },
	{ 0xd75b20aa, "rsa_parse_priv_key" },
	{ 0x51d07c05, "crypto_unregister_akcipher" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x789db693, "crypto_unregister_ahash" },
	{ 0xad509e90, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x558b281d, "aes_expandkey" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x58af7efd, "crypto_unregister_aead" },
	{ 0x2ab986f0, "crypto_register_aead" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xba27221e, "crypto_unregister_alg" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ccp");


MODULE_INFO(srcversion, "503B3EBEF682F4E35203AED");
