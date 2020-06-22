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
	{ 0x36389d2e, "serpent_cbc_dec_8way_avx" },
	{ 0xb8da500, "glue_ctr_req_128bit" },
	{ 0xb2dcc1fa, "serpent_ecb_enc_8way_avx" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe01bd023, "__serpent_encrypt" },
	{ 0x6671a361, "simd_unregister_skciphers" },
	{ 0xc59d1a0a, "serpent_xts_dec_8way_avx" },
	{ 0xe809ca7f, "serpent_xts_dec" },
	{ 0xd98a776d, "glue_ecb_req_128bit" },
	{ 0x525ad6df, "xts_serpent_setkey" },
	{ 0x281073c7, "__serpent_decrypt" },
	{ 0xc5850110, "printk" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x92dded8c, "serpent_xts_enc" },
	{ 0x43d2da80, "simd_register_skciphers_compat" },
	{ 0x6d65433d, "glue_xts_req_128bit" },
	{ 0xc9c39aed, "serpent_ctr_8way_avx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3f20a4a9, "serpent_ecb_dec_8way_avx" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0x20a243c, "serpent_xts_enc_8way_avx" },
	{ 0xd28130d, "glue_cbc_encrypt_req_128bit" },
	{ 0x1c871146, "__serpent_crypt_ctr" },
	{ 0xe510100, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "serpent-avx-x86_64,glue_helper,serpent_generic,crypto_simd");


MODULE_INFO(srcversion, "81B6219EC269A37FCEF5C0A");
