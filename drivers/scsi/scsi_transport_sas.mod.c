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
	{ 0x843fb2fe, "transport_class_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x128c3351, "scsi_remove_target" },
	{ 0x754d539c, "strlen" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x6c4937df, "transport_destroy_device" },
	{ 0x2280c950, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe19a8bb5, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x17475388, "_dev_warn" },
	{ 0x7533a30b, "device_del" },
	{ 0xfb38c238, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9acc3a68, "transport_configure_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xcfdc6c7a, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0x45cd73e1, "device_add" },
	{ 0xdd560c87, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c99b384, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd94181ab, "get_device" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0x72606b64, "scsi_get_vpd_page" },
	{ 0xdaf37dd6, "transport_remove_device" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15b5cc67, "bsg_job_done" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x555a6dd6, "bsg_remove_queue" },
	{ 0x1ab15099, "bsg_setup_queue" },
	{ 0x9805d229, "scsi_mode_sense" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "872DD426AECA3C2AE7589E4");
