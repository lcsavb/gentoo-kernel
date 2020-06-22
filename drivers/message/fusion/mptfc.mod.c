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
	{ 0x5a8a585d, "mptscsih_host_attrs" },
	{ 0x6286ec36, "fc_eh_timed_out" },
	{ 0xa4d02eb, "mptscsih_show_info" },
	{ 0xe1b33d43, "mptscsih_bios_param" },
	{ 0x12b20450, "mptscsih_change_queue_depth" },
	{ 0xe7b108fe, "mptscsih_slave_destroy" },
	{ 0x3ac62d63, "mptscsih_slave_configure" },
	{ 0xab675624, "mptscsih_host_reset" },
	{ 0x23b60f, "mptscsih_info" },
	{ 0x3c1a0236, "mptscsih_shutdown" },
	{ 0xd7ab3046, "mptscsih_resume" },
	{ 0x7126817d, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xfe2917c6, "fc_release_transport" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x815cead0, "mpt_reset_register" },
	{ 0x4c441a2a, "mpt_event_register" },
	{ 0xf1c959c5, "mptscsih_scandv_complete" },
	{ 0x58fa83e5, "mptscsih_taskmgmt_complete" },
	{ 0x8e8b6525, "mpt_register" },
	{ 0xa9d62e01, "mptscsih_io_done" },
	{ 0x57dfe87c, "fc_attach_transport" },
	{ 0xe3a53f4c, "sort" },
	{ 0x8df5650c, "fc_remote_port_rolechg" },
	{ 0xe0a7877f, "fc_remote_port_add" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe0541f8f, "mptscsih_abort" },
	{ 0xe0fbb43f, "mptscsih_dev_reset" },
	{ 0x8424159, "mptscsih_bus_reset" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3f4fc7cb, "fc_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb9588995, "mptscsih_remove" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xa0436008, "mpt_attach" },
	{ 0xee72cd8a, "mptscsih_ioc_reset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2cd3716f, "mptscsih_qcmd" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa9591582, "mptscsih_event_process" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0xfb578fc5, "memset" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x8692e07f, "mpt_config" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6f9663c, "scsi_is_fc_rport" },
	{ 0xc5850110, "printk" },
	{ 0x62664814, "fc_remote_port_delete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,scsi_transport_fc,mptbase");

MODULE_ALIAS("pci:v00001000d00000621sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000624sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000628sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000626sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000642sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000646sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "920CF1515116B36A2B57F88");
