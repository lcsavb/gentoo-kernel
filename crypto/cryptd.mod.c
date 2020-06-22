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
	{ 0x6fdd8e5, "crypto_alloc_skcipher" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x5eb3e78b, "ahash_register_instance" },
	{ 0xc7061ec8, "shash_attr_alg" },
	{ 0xe5a974e, "crypto_mod_put" },
	{ 0x9a9d3bb8, "crypto_dequeue_request" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x34ce0c36, "shash_ahash_digest" },
	{ 0xb8ac07fd, "crypto_grab_skcipher" },
	{ 0x12aacd6, "crypto_unregister_template" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb3ca7259, "crypto_shash_final" },
	{ 0xd0f94258, "shash_ahash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbc804e80, "skcipher_register_instance" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x38b87371, "crypto_grab_aead" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4dd23713, "crypto_register_template" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1f5917ce, "crypto_shash_setkey" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0x45da06fb, "crypto_drop_spawn" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x271fcec4, "crypto_enqueue_request" },
	{ 0xa417915b, "crypto_skcipher_decrypt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0xc8414918, "crypto_alloc_aead" },
	{ 0x85be76c3, "crypto_spawn_tfm2" },
	{ 0x396cd375, "crypto_init_shash_spawn" },
	{ 0x37a0cba, "kfree" },
	{ 0x77daddfb, "shash_ahash_update" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4292d983, "shash_no_setkey" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x6bad678b, "aead_register_instance" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd24a6d19, "crypto_alloc_ahash" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B92958244A46F1B5220BCEF");
