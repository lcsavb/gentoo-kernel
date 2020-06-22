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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x7b1dbcb0, "pci_set_cacheline_size" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x2f40834d, "pci_stop_and_remove_bus_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x723cc3ef, "pci_fixup_cardbus" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1207ea98, "pci_bus_assign_resources" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x17475388, "_dev_warn" },
	{ 0x674fc839, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc1b1b6c5, "freezing_slow_path" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0x1b13d538, "class_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf916dbbb, "pci_bus_add_devices" },
	{ 0xce807a25, "up_write" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x11b321c6, "pci_scan_slot" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x48f5f568, "pci_scan_bridge" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0xd94181ab, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x29361773, "complete" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa5b373b8, "pci_bus_size_bridges" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7635957AD966934830B4994");
