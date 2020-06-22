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
	{ 0x6bad678b, "aead_register_instance" },
	{ 0x38f8b7f9, "aead_exit_geniv" },
	{ 0x377afc2, "aead_init_geniv" },
	{ 0x581424b8, "aead_geniv_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x60d16ebb, "crypto_aead_encrypt" },
	{ 0xfb578fc5, "memset" },
	{ 0xd918dc6f, "crypto_skcipher_encrypt" },
	{ 0x2e50cbd2, "crypto_aead_decrypt" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xf5e4d1ed, "aead_geniv_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "200E51542A01AF555F4D0F0");
