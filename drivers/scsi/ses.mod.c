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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xc10a5a8d, "class_interface_unregister" },
	{ 0x3ba5bb9c, "scsi_register_driver" },
	{ 0xeb04e97c, "scsi_register_interface" },
	{ 0x5c82944, "__scsi_iterate_devices" },
	{ 0xb896bd2f, "enclosure_register" },
	{ 0x421c8312, "sas_get_address" },
	{ 0x6e25858a, "enclosure_for_each_device" },
	{ 0xb934f27c, "scsi_is_sas_rphy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe6924423, "enclosure_component_alloc" },
	{ 0xa2b9fcd8, "enclosure_component_register" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x5416bcae, "enclosure_add_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd3b3f756, "__scsi_execute" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x23cd5163, "enclosure_remove_device" },
	{ 0x221ce338, "enclosure_unregister" },
	{ 0x94bd2068, "put_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6208106, "enclosure_find" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "enclosure,scsi_transport_sas");


MODULE_INFO(srcversion, "9924768117AC8303EE013F5");
