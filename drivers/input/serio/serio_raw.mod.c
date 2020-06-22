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
	{ 0x9625ba10, "noop_llseek" },
	{ 0x19d88bab, "serio_unregister_driver" },
	{ 0x7ce5f416, "__serio_register_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x867234, "misc_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd2ad483d, "serio_close" },
	{ 0x2e76b019, "misc_register" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0x3d6a7db1, "serio_open" },
	{ 0xd94181ab, "get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x95536bb7, "fasync_helper" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x566257fc, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x94bd2068, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "EA688D9AD5AEE3436CE2D22");
