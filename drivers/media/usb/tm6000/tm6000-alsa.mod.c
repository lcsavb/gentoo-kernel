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
	{ 0x652b4060, "param_ops_bool" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x6ea87b1e, "snd_pcm_lib_ioctl" },
	{ 0x825a9f70, "tm6000_unregister_extension" },
	{ 0x2efc6d88, "tm6000_register_extension" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x88464539, "tm6000_set_audio_bitrate" },
	{ 0x509e3e93, "tm6000_set_reg_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1dc05a49, "snd_card_register" },
	{ 0x447f2369, "snd_pcm_set_ops" },
	{ 0x5102bac7, "snd_pcm_new" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x20ea51e2, "snd_component_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0xca5a1fc6, "snd_card_new" },
	{ 0x7a5e88cd, "snd_pcm_hw_constraint_integer" },
	{ 0x14eb42d8, "snd_pcm_hw_constraint_pow2" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8c8f299b, "vmalloc_to_page" },
	{ 0x37a0cba, "kfree" },
	{ 0xb69a4550, "snd_card_free" },
	{ 0xc5850110, "printk" },
	{ 0xecf4a0a6, "snd_pcm_period_elapsed" },
	{ 0xef2ffe82, "snd_pcm_stream_unlock" },
	{ 0x97482e52, "snd_pcm_stream_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,tm6000,snd");


MODULE_INFO(srcversion, "94EB9BD787CDDDCD227B682");
