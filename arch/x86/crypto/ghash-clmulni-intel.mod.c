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
	{ 0xb5ef995, "cryptd_ahash_queued" },
	{ 0x34ce0c36, "shash_ahash_digest" },
	{ 0x615dab77, "crypto_stats_ahash_update" },
	{ 0xb3ca7259, "crypto_shash_final" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe845e630, "crypto_ahash_final" },
	{ 0x75d0e3de, "crypto_ahash_digest" },
	{ 0xa410751, "cryptd_shash_desc" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x6edaea66, "crypto_register_ahash" },
	{ 0x9dce09fe, "crypto_unregister_shash" },
	{ 0x4a1b3a80, "crypto_register_shash" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x789db693, "crypto_unregister_ahash" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1b572a5, "cryptd_ahash_child" },
	{ 0x95a91cde, "crypto_ahash_setkey" },
	{ 0x77daddfb, "shash_ahash_update" },
	{ 0x73dd54eb, "irq_fpu_usable" },
	{ 0x2c19a366, "crypto_stats_get" },
	{ 0xfa9b0607, "cryptd_alloc_ahash" },
	{ 0x948d7195, "cryptd_free_ahash" },
	{ 0xbec30d05, "x86_match_cpu" },
};

MODULE_INFO(depends, "cryptd");

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0081*");

MODULE_INFO(srcversion, "E0A5C143DA1C0BE9375FD6D");
