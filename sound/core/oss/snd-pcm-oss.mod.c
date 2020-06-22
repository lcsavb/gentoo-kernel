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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0x6377d4d3, "snd_card_file_remove" },
	{ 0xe7356b6a, "snd_pcm_release_substream" },
	{ 0x945963f7, "snd_pcm_notify" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x8634813b, "snd_info_create_card_entry" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb0d3765e, "snd_pcm_hw_refine" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x54bd9639, "nonseekable_open" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0xfb578fc5, "memset" },
	{ 0x712e52f7, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x890eca62, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x755ddc7e, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd8f09c1d, "snd_mixer_oss_ioctl_card" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x681e3cee, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa69662e, "snd_card_file_add" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88872f38, "snd_pcm_stream_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5738a7ff, "snd_pcm_stream_unlock_irq" },
	{ 0x4194fcb0, "snd_register_oss_device" },
	{ 0x1e521900, "snd_pcm_open_substream" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x116bd426, "snd_unregister_oss_device" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x3325d60b, "__snd_pcm_lib_xfer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x38a3a131, "snd_info_free_entry" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x366f486d, "snd_pcm_kernel_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x621dd945, "snd_info_register" },
	{ 0x64f32ca1, "snd_pcm_hw_param_first" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "snd-pcm,snd,snd-mixer-oss");


MODULE_INFO(srcversion, "96583806A0E57D1F77A727B");
