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
	{ 0xea778fab, "sg_pcopy_to_buffer" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x13ce87e8, "asn1_ber_decoder" },
	{ 0x1f276852, "crypto_register_akcipher" },
	{ 0xde867c29, "ecc_is_pubkey_valid_partial" },
	{ 0xeac9b99a, "vli_from_le64" },
	{ 0x7c0fbb00, "vli_mod_mult_slow" },
	{ 0x92668805, "vli_cmp" },
	{ 0x1a5faa3a, "vli_mod_inv" },
	{ 0x4c281912, "vli_is_zero" },
	{ 0x4230a8d7, "sg_nents_for_len" },
	{ 0x51d07c05, "crypto_unregister_akcipher" },
	{ 0x9263b417, "ecc_point_mult_shamir" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x34bab869, "look_up_OID" },
	{ 0x9f6efabd, "vli_sub" },
	{ 0x16e410ff, "vli_from_be64" },
};

MODULE_INFO(depends, "ecc");


MODULE_INFO(srcversion, "E81A075F032F364FEE4B713");
