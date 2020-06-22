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
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xda584c89, "single_release" },
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x4cb51f18, "telemetry_pltconfig_valid" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x9bd9354b, "intel_pmc_gcr_read64" },
	{ 0x5bb8e91a, "telemetry_raw_read_eventlog" },
	{ 0x82bb2dbe, "telemetry_get_evtname" },
	{ 0x1c7565c2, "telemetry_read_events" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0x870aba12, "dev_driver_string" },
	{ 0xd75274fe, "pci_read_config_word" },
	{ 0xd517f601, "seq_puts" },
	{ 0x665cd407, "telemetry_read_eventlog" },
	{ 0xc49eaee5, "intel_pmc_s0ix_counter_read" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xe1eb4be1, "telemetry_set_trace_verbosity" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x35db93a6, "telemetry_get_trace_verbosity" },
	{ 0x40120314, "single_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_telemetry_core");

MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod005C:feature:*");
MODULE_ALIAS("cpu:type:x86,ven0000fam0006mod007A:feature:*");

MODULE_INFO(srcversion, "433EE03AA19BF6EE65D98ED");
