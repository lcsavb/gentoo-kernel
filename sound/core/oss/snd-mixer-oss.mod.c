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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x30b423e3, "snd_ctl_find_numid" },
	{ 0x754d539c, "strlen" },
	{ 0x6377d4d3, "snd_card_file_remove" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x8634813b, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x919ee3b8, "snd_ctl_notify" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x681e3cee, "module_put" },
	{ 0x5280147f, "snd_mixer_oss_notify_callback" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa69662e, "snd_card_file_add" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc382760, "snd_card_ref" },
	{ 0x4194fcb0, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x6cb2b47e, "snd_ctl_find_id" },
	{ 0x116bd426, "snd_unregister_oss_device" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x38a3a131, "snd_info_free_entry" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x621dd945, "snd_info_register" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "BCE4B1063ECDFDF87613579");
