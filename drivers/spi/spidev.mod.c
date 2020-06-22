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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x33650c48, "class_destroy" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x94bd2068, "put_device" },
	{ 0xcebe7641, "spi_setup" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xd94181ab, "get_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1ba5402, "stream_open" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x17475388, "_dev_warn" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe629aceb, "device_create" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");

MODULE_INFO(srcversion, "590DAF6B6A5B0BED538A1E4");
