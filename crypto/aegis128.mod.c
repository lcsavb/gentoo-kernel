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
	{ 0x91592211, "skcipher_walk_aead_decrypt" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1a10c32b, "crypto_ft_tab" },
	{ 0x87b8798d, "sg_next" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x59682183, "skcipher_walk_done" },
	{ 0x80c63b8f, "skcipher_walk_aead_encrypt" },
	{ 0x712e52f7, "current_task" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x58af7efd, "crypto_unregister_aead" },
	{ 0x2ab986f0, "crypto_register_aead" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A6C4CCB49C854C6E8D3A1F2");
