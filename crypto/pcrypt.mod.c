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
	{ 0xc22114fa, "kset_unregister" },
	{ 0x4dd23713, "crypto_register_template" },
	{ 0xfdedcfcd, "padata_start" },
	{ 0x4df65a95, "padata_stop" },
	{ 0xbad041a1, "kset_create_and_add" },
	{ 0xcc112465, "kernel_kobj" },
	{ 0x85be76c3, "crypto_spawn_tfm2" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6bad678b, "aead_register_instance" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x38b87371, "crypto_grab_aead" },
	{ 0x12ed4f94, "padata_alloc_shell" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x89b82421, "padata_free" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x6c9889fa, "kobject_add" },
	{ 0x7ca47a16, "padata_alloc_possible" },
	{ 0x37a0cba, "kfree" },
	{ 0xe5bb562f, "padata_free_shell" },
	{ 0x45da06fb, "crypto_drop_spawn" },
	{ 0xf54453fd, "crypto_destroy_tfm" },
	{ 0xc0e32629, "crypto_aead_setkey" },
	{ 0x77c44121, "crypto_aead_setauthsize" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0xaff243d8, "padata_do_parallel" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x60787430, "padata_do_serial" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A651C0E9871266E0B83014");
