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
	{ 0x167e9e59, "param_ops_short" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xfbabfd18, "_dev_crit" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x867234, "misc_deregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x17475388, "_dev_warn" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2e76b019, "misc_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x8c14b8e3, "hwmon_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x4ffa73a7, "device_remove_file" },
	{ 0x77989b7e, "device_create_file" },
	{ 0x173d184, "devm_i2c_new_dummy_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc1ba5402, "stream_open" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core,hwmon-vid");

MODULE_ALIAS("i2c:w83793");

MODULE_INFO(srcversion, "FF2187F753E9B605512F6A1");
