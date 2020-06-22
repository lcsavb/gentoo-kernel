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
	{ 0xda6c1d76, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6c4937df, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x2280c950, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xfc81accc, "scsi_is_host_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7533a30b, "device_del" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xfb38c238, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x9acc3a68, "transport_configure_device" },
	{ 0xcfdc6c7a, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x45cd73e1, "device_add" },
	{ 0xdd560c87, "transport_class_unregister" },
	{ 0x75e47ded, "scsi_target_unblock" },
	{ 0x94bd2068, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c99b384, "transport_setup_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd94181ab, "get_device" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xdaf37dd6, "transport_remove_device" },
	{ 0x569d160, "scsi_target_block" },
	{ 0x806f9540, "dev_set_name" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98CE3517D3DF1DD42043CF1");
