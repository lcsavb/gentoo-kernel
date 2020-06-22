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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x5bbdfa26, "scatterwalk_ffwd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0x59682183, "skcipher_walk_done" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd986dad1, "kernel_fpu_begin" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x2419606, "skcipher_walk_virt" },
	{ 0x38722f80, "kernel_fpu_end" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4bbfbbf8, "skcipher_walk_atomise" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "49B0DDF883E2EA9D720C7D6");
