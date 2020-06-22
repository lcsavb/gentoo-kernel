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
	{ 0x204c5067, "scsi_dev_info_add_list" },
	{ 0x843fb2fe, "transport_class_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x754d539c, "strlen" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0xfeac7c69, "scsi_get_device_flags_keyed" },
	{ 0xd7c9c94d, "scsi_target_resume" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xd8043e9, "anon_transport_class_register" },
	{ 0x2280c950, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x97bdfa60, "scsi_dev_info_remove_list" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x975602d3, "scsi_device_quiesce" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x383fc7f2, "sysfs_chmod_file" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd3b3f756, "__scsi_execute" },
	{ 0x5a921311, "strncmp" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0xcfdc6c7a, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdd560c87, "transport_class_unregister" },
	{ 0x172f6ecd, "sysfs_update_group" },
	{ 0x7b178afe, "unlock_system_sleep" },
	{ 0xebc9a09f, "lock_system_sleep" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x2733eaf7, "scsi_dev_info_list_add_keyed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6b5eeab4, "scsi_device_set_state" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x95831732, "scsi_target_quiesce" },
	{ 0xbb06d23f, "scsi_is_target_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0x1f44becd, "anon_transport_class_unregister" },
	{ 0xd0e6564d, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E418CD04846F379B1C68D1D");
