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
	{ 0xb8da500, "glue_ctr_req_128bit" },
	{ 0xc1f8bbfe, "glue_xts_crypt_128bit_one" },
	{ 0x7c7bf6e0, "twofish_enc_blk" },
	{ 0x6671a361, "simd_unregister_skciphers" },
	{ 0x9dfb11d8, "twofish_enc_blk_ctr" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0xd98a776d, "glue_ecb_req_128bit" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x43d2da80, "simd_register_skciphers_compat" },
	{ 0x6d65433d, "glue_xts_req_128bit" },
	{ 0xb1e70801, "__twofish_setkey" },
	{ 0x4c995a89, "__twofish_enc_blk_3way" },
	{ 0xb0aa812e, "fips_enabled" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd859828c, "twofish_enc_blk_ctr_3way" },
	{ 0x72e431ea, "twofish_setkey" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe3784eb9, "twofish_dec_blk_cbc_3way" },
	{ 0x8cccec5b, "twofish_dec_blk_3way" },
	{ 0xd28130d, "glue_cbc_encrypt_req_128bit" },
	{ 0x1f491d36, "twofish_dec_blk" },
	{ 0xe510100, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper,twofish-x86_64,crypto_simd,twofish-x86_64-3way,twofish_common");


MODULE_INFO(srcversion, "90AEBEBFD080760B9AFF686");
