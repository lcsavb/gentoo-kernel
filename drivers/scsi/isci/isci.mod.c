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
	{ 0x17e08233, "sas_change_queue_depth" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0xc72c2383, "sas_release_transport" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x93b06657, "sas_drain_work" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x9fee1593, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xad26661c, "sas_suspend_ha" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8d05f488, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7c41115b, "pci_biosrom_size" },
	{ 0x832549e7, "sas_phy_reset" },
	{ 0x1a281859, "pv_ops" },
	{ 0x596a55c4, "sas_eh_target_reset_handler" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4b83191, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x17475388, "_dev_warn" },
	{ 0x6bbd5d61, "sas_target_alloc" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x712e52f7, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x886e10e2, "sas_ioctl" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xcce019f8, "sas_unregister_ha" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x1628ba0e, "sas_register_ha" },
	{ 0x1a983717, "pci_map_biosrom" },
	{ 0x7b3a3b73, "sas_eh_abort_handler" },
	{ 0x58567c0e, "sas_resume_ha" },
	{ 0x3134ef3f, "devm_free_irq" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd433d42b, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x138fceae, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x655ed5e1, "sas_queuecommand" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5e169416, "sas_ata_schedule_reset" },
	{ 0xf4efd64e, "sas_remove_host" },
	{ 0xd1e8bffb, "param_ops_byte" },
	{ 0xa4f264a5, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc094e94c, "sas_bios_param" },
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x368e9389, "sas_prep_resume_ha" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x579d15e3, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa4471156, "sas_slave_configure" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x840acee0, "sas_domain_attach_transport" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x20a69ede, "pci_save_state" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8E005C529073FD21E7F6115");
