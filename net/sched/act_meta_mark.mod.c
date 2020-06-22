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
	{ 0xd7a9660c, "ife_validate_meta_u32" },
	{ 0x1ef4eb5b, "ife_release_meta_gen" },
	{ 0xbb01e49, "ife_alloc_meta_u32" },
	{ 0xaa3b0187, "ife_get_meta_u32" },
	{ 0x8f2d2fe5, "unregister_ife_op" },
	{ 0x989d8a8e, "register_ife_op" },
	{ 0x53deade0, "ife_check_meta_u32" },
	{ 0x2d489352, "ife_encode_meta_u32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "act_ife");


MODULE_INFO(srcversion, "9118F4D5AF293D4D5D875F2");
