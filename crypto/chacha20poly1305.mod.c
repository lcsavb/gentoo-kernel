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
	{ 0x9925ab34, "crypto_unregister_templates" },
	{ 0xd9270181, "crypto_register_templates" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0x6bad678b, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8ac07fd, "crypto_grab_skcipher" },
	{ 0xc36bad08, "crypto_init_ahash_spawn" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xe5a974e, "crypto_mod_put" },
	{ 0x43a177d3, "crypto_find_alg" },
	{ 0x5d353c7f, "crypto_ahash_type" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0x45da06fb, "crypto_drop_spawn" },
	{ 0x85be76c3, "crypto_spawn_tfm2" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x615dab77, "crypto_stats_ahash_update" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0x7213fd12, "crypto_ahash_finup" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8640B5F10DADE67920A80CE");
