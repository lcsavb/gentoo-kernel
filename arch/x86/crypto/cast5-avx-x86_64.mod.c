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
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x5b17be06, "cast_s4" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0x6671a361, "simd_unregister_skciphers" },
	{ 0xef81a4af, "__cast5_encrypt" },
	{ 0x5609ce41, "cast_s2" },
	{ 0x59682183, "skcipher_walk_done" },
	{ 0xc5850110, "printk" },
	{ 0x502e5100, "cast5_setkey" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0x188d9d26, "__cast5_decrypt" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x43d2da80, "simd_register_skciphers_compat" },
	{ 0x2419606, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4bbfbbf8, "skcipher_walk_atomise" },
	{ 0x3ef051c8, "crypto_inc" },
	{ 0xb9cba57f, "cast_s3" },
};

MODULE_INFO(depends, "cast_common,crypto_simd,cast5_generic");


MODULE_INFO(srcversion, "D0DE0DFCDF11D21462E981D");
