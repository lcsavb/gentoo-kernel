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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7ea3056, "snd_pcm_hw_constraint_step" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0xb2c3188a, "snd_ctl_boolean_stereo_info" },
	{ 0x7f10960c, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x5541c382, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5afbb89f, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x512c39e8, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0x5e59a1c6, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xce60c842, "snd_ctl_add" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "BC4DDF93CFADB7F5CC3AEFC");
