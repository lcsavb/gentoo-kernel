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
	{ 0x3b052859, "param_ops_ushort" },
	{ 0x911b2ef5, "param_ops_charp" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xab735372, "ipmi_dmi_get_slave_addr" },
	{ 0x1860d1c4, "ipmi_add_smi" },
	{ 0x676664c5, "device_add_groups" },
	{ 0x73fbc420, "wake_up_process" },
	{ 0x7e3ad502, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xc5f3f052, "i2c_adapter_type" },
	{ 0xfc695b60, "kthread_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8360c75a, "device_remove_groups" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x17475388, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1fd765f7, "device_property_read_u8_array" },
	{ 0xb636b978, "device_property_read_u16_array" },
	{ 0x510472f7, "i2c_for_each_dev" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d77822, "i2c_smbus_write_block_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd94181ab, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x29361773, "complete" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2c1fc4b9, "i2c_smbus_read_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,ipmi_msghandler");

MODULE_ALIAS("i2c:ipmi_ssif");
MODULE_ALIAS("acpi*:IPI0001:*");

MODULE_INFO(srcversion, "00AB9663FEA4605E3C671E6");
