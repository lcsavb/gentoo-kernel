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
	{ 0xe01bd023, "__serpent_encrypt" },
	{ 0x6671a361, "simd_unregister_skciphers" },
	{ 0xd98a776d, "glue_ecb_req_128bit" },
	{ 0x281073c7, "__serpent_decrypt" },
	{ 0x43d2da80, "simd_register_skciphers_compat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd4c9681a, "__serpent_setkey" },
	{ 0xd28130d, "glue_cbc_encrypt_req_128bit" },
	{ 0xe510100, "glue_cbc_decrypt_req_128bit" },
};

MODULE_INFO(depends, "glue_helper,serpent_generic,crypto_simd");


MODULE_INFO(srcversion, "7588D8032AA0F35D6ECB9E7");
