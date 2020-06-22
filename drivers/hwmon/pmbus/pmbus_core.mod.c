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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xc1b14de8, "hwmon_device_register_with_groups" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x2af67311, "i2c_smbus_read_byte_data" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd06095e5, "i2c_smbus_write_word_data" },
	{ 0x463ce6fb, "i2c_smbus_write_byte_data" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0x64c337b, "hwmon_device_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfda0da5b, "i2c_smbus_read_word_data" },
	{ 0x17475388, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x76d60d47, "i2c_smbus_write_byte" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x8703f27b, "rdev_get_id" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x650d60de, "rdev_get_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa7b3b8cc, "devm_regulator_register" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "C8652434F38E457D59D35B7");
