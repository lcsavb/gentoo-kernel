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
	{ 0x52ad9379, "crypto_unregister_skciphers" },
	{ 0x4c3c05e3, "crypto_chacha12_setkey" },
	{ 0x118d680a, "crypto_xchacha_crypt" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaa08ab23, "crypto_chacha20_setkey" },
	{ 0x59682183, "skcipher_walk_done" },
	{ 0x8f3443cd, "crypto_chacha_crypt" },
	{ 0x4614f20a, "crypto_register_skciphers" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xcaa68533, "cpu_has_xfeatures" },
	{ 0xe7436d31, "crypto_chacha_init" },
	{ 0x2419606, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "chacha_generic");


MODULE_INFO(srcversion, "B5E84BD6DD1D626B1E458C3");
