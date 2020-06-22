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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4f0ca67, "mei_irq_write_handler" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0xc5539e60, "mei_write_is_idle" },
	{ 0x3e564f29, "mei_device_init" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xa5bff49d, "__tracepoint_mei_pci_cfg_read" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xcc5de5ee, "mei_restart" },
	{ 0x2d020f95, "mei_irq_compl_handler" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x17475388, "_dev_warn" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8b3168ec, "mei_register" },
	{ 0x54a0ae01, "mei_stop" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe8ad90bd, "mei_irq_read_handler" },
	{ 0xeb508186, "mei_cancel_work" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4738af7, "mei_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x860c0096, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4a6bad76, "mei_start" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x90a24af4, "mei_fw_status2str" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x433afae0, "dev_pm_domain_set" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mei");

MODULE_ALIAS("pci:v00008086d00000F18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002298sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A2F7D86F305C37D59E97354");
