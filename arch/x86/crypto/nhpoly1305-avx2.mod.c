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
	{ 0x44cef47e, "crypto_nhpoly1305_init" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x80f8d56b, "crypto_nhpoly1305_setkey" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0x9dce09fe, "crypto_unregister_shash" },
	{ 0x4a1b3a80, "crypto_register_shash" },
	{ 0x60a296de, "crypto_nhpoly1305_update" },
	{ 0x9281a4d8, "crypto_nhpoly1305_update_helper" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c7f2abb, "crypto_nhpoly1305_final" },
	{ 0x73dd54eb, "irq_fpu_usable" },
};

MODULE_INFO(depends, "nhpoly1305");


MODULE_INFO(srcversion, "718FACA8BB23690805F0E5A");
