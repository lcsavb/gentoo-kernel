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
	{ 0x906f8c9f, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x14a47e9b, "snd_ctl_boolean_mono_info" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0xce60c842, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "E76CD87BB9DC0C4FB775C6A");
