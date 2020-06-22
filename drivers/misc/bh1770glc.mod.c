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
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x3a38fc21, "pm_runtime_enable" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc426acba, "devm_regulator_bulk_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1abb77f, "regulator_bulk_enable" },
	{ 0xbe921e36, "sysfs_notify" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x9b66de5c, "__pm_runtime_disable" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95b86149, "i2c_smbus_write_i2c_block_data" },
	{ 0xc4f7d395, "regulator_bulk_disable" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("i2c:bh1770glc");
MODULE_ALIAS("i2c:sfh7770");

MODULE_INFO(srcversion, "F27AE6CD14763576062E932");
