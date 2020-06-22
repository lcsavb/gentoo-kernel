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
	{ 0x12aacd6, "crypto_unregister_template" },
	{ 0x4dd23713, "crypto_register_template" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x6bad678b, "aead_register_instance" },
	{ 0xc5850110, "printk" },
	{ 0x38b87371, "crypto_grab_aead" },
	{ 0xbc804e80, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe5a974e, "crypto_mod_put" },
	{ 0x4292d983, "shash_no_setkey" },
	{ 0x4b59301a, "crypto_alg_mod_lookup" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0xb8ac07fd, "crypto_grab_skcipher" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0xaa14636c, "crypto_shash_digest" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6862114d, "crypto_shash_finup" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x85be76c3, "crypto_spawn_tfm2" },
	{ 0x9c6098c5, "crypto_alloc_shash" },
	{ 0x32774272, "crypto_alloc_base" },
	{ 0x45da06fb, "crypto_drop_spawn" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "075FFB328395C9565264369");
