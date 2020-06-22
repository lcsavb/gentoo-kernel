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
	{ 0xc5850110, "printk" },
	{ 0xe5a974e, "crypto_mod_put" },
	{ 0xbc804e80, "skcipher_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x396cd375, "crypto_init_shash_spawn" },
	{ 0x4b59301a, "crypto_alg_mod_lookup" },
	{ 0xe4a6e488, "crypto_grab_spawn" },
	{ 0xb8ac07fd, "crypto_grab_skcipher" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0x299fbb2e, "poly1305_core_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf99e621b, "crypto_req_done" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xda4f94ea, "crypto_spawn_tfm" },
	{ 0x85be76c3, "crypto_spawn_tfm2" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0x5ef1870c, "poly1305_core_emit" },
	{ 0x30dbed6e, "poly1305_core_blocks" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb3ca7259, "crypto_shash_final" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0xbc704ff, "crypto_shash_update" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0x45da06fb, "crypto_drop_spawn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "poly1305_generic");


MODULE_INFO(srcversion, "0CFA9C31CB7A713DB33B85D");
