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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x1000e51, "schedule" },
	{ 0x2d01e178, "scsi_rescan_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x712e52f7, "current_task" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x17475388, "_dev_warn" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x37a0cba, "kfree" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B4Bd00009143sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009580sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2718502E33D8977A69F5594");
