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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xb697d689, "hid_unregister_driver" },
	{ 0x23c87eea, "__hid_register_driver" },
	{ 0x5e75c55f, "gpiochip_irqchip_add_key" },
	{ 0x4109798, "handle_simple_irq" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xd17ba9c4, "gpiochip_add_data_with_key" },
	{ 0x6626afca, "down" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xcf2a6966, "up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x9889e67b, "hid_hw_open" },
	{ 0x99c3d4c7, "hid_hw_start" },
	{ 0xe5ea292b, "hid_open_report" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x383fc7f2, "sysfs_chmod_file" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x96848186, "scnprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x69acdf38, "memcpy" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0xd2471da0, "irq_get_irq_data" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcf0b309d, "gpiochip_get_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x80171127, "hid_hw_stop" },
	{ 0xa3030d4c, "hid_hw_close" },
	{ 0x8c71f7ca, "gpiochip_remove" },
	{ 0x99f73ca9, "gpiochip_free_own_desc" },
	{ 0x38d53baf, "gpiochip_unlock_as_irq" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("hid:b0003g*v000010C4p0000EA90");

MODULE_INFO(srcversion, "342BD4692B546A14FBE4EF7");
