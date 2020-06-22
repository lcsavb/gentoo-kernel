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
	{ 0xf40f1d62, "ife_validate_meta_u16" },
	{ 0x1ef4eb5b, "ife_release_meta_gen" },
	{ 0x48615833, "ife_alloc_meta_u16" },
	{ 0xe054378f, "ife_get_meta_u16" },
	{ 0x8f2d2fe5, "unregister_ife_op" },
	{ 0x989d8a8e, "register_ife_op" },
	{ 0x9489b508, "ife_check_meta_u16" },
	{ 0xd605b266, "ife_encode_meta_u16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "act_ife");


MODULE_INFO(srcversion, "B81169E1BBD6E6BB8392ABE");
