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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x5ddd724a, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x11b2b136, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x71429ba2, "dev_attr_sw_activity" },
	{ 0xa9779716, "ata_port_printk" },
	{ 0x6f3a4eaa, "sata_pmp_error_handler" },
	{ 0x9394db3c, "sata_link_scr_lpm" },
	{ 0x5a81c10c, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfeeecb5e, "ata_port_desc" },
	{ 0x1a281859, "pv_ops" },
	{ 0x9123425b, "dev_attr_ncq_prio_enable" },
	{ 0xfaf5369, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xd3300d41, "sata_pmp_port_ops" },
	{ 0x36e0a25f, "ata_ehi_push_desc" },
	{ 0x17475388, "_dev_warn" },
	{ 0x15045cda, "ata_dev_set_feature" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x785e42b2, "ata_dev_printk" },
	{ 0x7ac4717c, "ata_wait_register" },
	{ 0xf5605828, "ata_std_qc_defer" },
	{ 0xaac5dada, "ata_host_start" },
	{ 0x55f5c9d3, "ata_link_abort" },
	{ 0xc8adc432, "dev_attr_unload_heads" },
	{ 0xc452769e, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x9eba254e, "ata_ehi_clear_desc" },
	{ 0x35268682, "sata_link_hardreset" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x8769f080, "ata_host_activate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x4a6131e6, "ata_host_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x49008588, "dev_attr_em_message_type" },
	{ 0xd25997d1, "sata_lpm_ignore_phy_events" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdb6a8d7d, "ata_link_printk" },
	{ 0xa2a43110, "ata_wait_after_reset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaba870fc, "ata_qc_complete_multiple" },
	{ 0x54d98d41, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x4de27939, "ata_std_postreset" },
	{ 0x2e6f9137, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x812599a3, "dev_attr_link_power_management_policy" },
	{ 0xe292ccd2, "ata_port_abort" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0xfc1a207c, "sata_async_notification" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A9B41AACFFFC209BAB2653E");
