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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x8f532259, "pci_enable_msi" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x21c6fd0a, "scsi_block_requests" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xf4de1fd5, "blk_queue_rq_timeout" },
	{ 0x7eb14fec, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00008350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad0000C350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad0000E350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008650sv0000105Asd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008650sv00001033sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008870sv0000105Asd00008870bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008870sv0000105Asd00004300bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004311bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004312bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004321bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008871sv0000105Asd00004322bc*sc*i*");

MODULE_INFO(srcversion, "966DCCD342C5A77C8010A31");
