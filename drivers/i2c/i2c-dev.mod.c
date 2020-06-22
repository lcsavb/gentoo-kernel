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
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xbd36beb, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x510472f7, "i2c_for_each_dev" },
	{ 0x33650c48, "class_destroy" },
	{ 0x1ec199ee, "bus_register_notifier" },
	{ 0xa9d71439, "i2c_bus_type" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2984c691, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0xc5850110, "printk" },
	{ 0x83c005b8, "cdev_del" },
	{ 0xe629aceb, "device_create" },
	{ 0xb4446279, "cdev_add" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc8426823, "i2c_get_adapter" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x142c470a, "i2c_verify_client" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0xc5f3f052, "i2c_adapter_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaa92d4c6, "i2c_smbus_xfer" },
	{ 0x37a0cba, "kfree" },
	{ 0xdee7c5d3, "i2c_put_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");


MODULE_INFO(srcversion, "0241A73119EC348FBD9B42D");
