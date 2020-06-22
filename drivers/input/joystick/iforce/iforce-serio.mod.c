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
	{ 0x19d88bab, "serio_unregister_driver" },
	{ 0x7ce5f416, "__serio_register_driver" },
	{ 0xf3896b4d, "iforce_init_device" },
	{ 0x3d6a7db1, "serio_open" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca82860, "iforce_process_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa9233d69, "iforce_send_packet" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2ad483d, "serio_close" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iforce");

MODULE_ALIAS("serio:ty02pr1Did*ex*");

MODULE_INFO(srcversion, "E53AFE9D98EF6C5DC037CFE");
