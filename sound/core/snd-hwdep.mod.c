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
	{ 0xe2414fa8, "snd_register_device" },
	{ 0x754d539c, "strlen" },
	{ 0x6377d4d3, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4a1d49b4, "snd_device_initialize" },
	{ 0xb69d65b1, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x39a131b0, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x17475388, "_dev_warn" },
	{ 0x16f582ec, "snd_device_new" },
	{ 0x712e52f7, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xead5b923, "snd_unregister_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x681e3cee, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfa69662e, "snd_card_file_add" },
	{ 0xbfb7d158, "snd_ctl_register_ioctl" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4194fcb0, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x116bd426, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x38a3a131, "snd_info_free_entry" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb7041d86, "snd_ctl_unregister_ioctl_compat" },
	{ 0x7541304f, "snd_info_create_module_entry" },
	{ 0x621dd945, "snd_info_register" },
	{ 0xa9e6af54, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "10838528582A30E4C1E3DB8");
