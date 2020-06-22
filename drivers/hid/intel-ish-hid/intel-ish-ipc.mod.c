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
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x754d539c, "strlen" },
	{ 0xf8ddcc68, "pcim_iomap_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc835b3fd, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ed7ee08, "pci_reset_function" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x7609dfbe, "ishtp_reset_handler" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x99b17d7a, "trace_define_field" },
	{ 0xa6ac4d1a, "ishtp_start" },
	{ 0x6bd55222, "bpf_trace_run1" },
	{ 0x64d5c978, "ishtp_reset_compl_handler" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xd08a16d7, "ishtp_recv" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4819d039, "trace_event_reg" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0xa985eae7, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xef00d27f, "pcim_iomap_regions" },
	{ 0x59478097, "trace_event_ignore_this_pid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x76301d6d, "ishtp_bus_remove_all_clients" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaca6db90, "ishtp_send_suspend" },
	{ 0x97a3bce, "ishtp_send_resume" },
	{ 0x291bec8a, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x226a6bd8, "event_triggers_call" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7c8d264d, "ishtp_device_init" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3092b99f, "trace_event_raw_init" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd56c8357, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "intel-ishtp");

MODULE_ALIAS("pci:v00008086d000022D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009DFCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000031A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A37Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000034FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A135sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000002FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000006FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A0FCsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3C1B9A7CF926D9A14530592");
