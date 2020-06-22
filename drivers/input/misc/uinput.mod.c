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
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x867234, "misc_deregister" },
	{ 0x2e76b019, "misc_register" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x754d539c, "strlen" },
	{ 0x26eccb61, "input_ff_destroy" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x55a3de79, "input_register_device" },
	{ 0x798fdf84, "input_ff_create" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf7455c16, "input_event_to_user" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xad0cba41, "input_event" },
	{ 0xe233762a, "input_event_from_user" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0x9dba1d92, "input_alloc_absinfo" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc1ba5402, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x712e52f7, "current_task" },
	{ 0xecf98b58, "input_ff_flush" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x1a281859, "pv_ops" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "957A5BBC5CF6768558AC4C4");
