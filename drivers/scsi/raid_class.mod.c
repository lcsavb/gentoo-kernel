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
	{ 0x1a7795ad, "attribute_container_classdev_to_container" },
	{ 0xda6c1d76, "dev_printk" },
	{ 0x2280c950, "attribute_container_unregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xcfdc6c7a, "attribute_container_register" },
	{ 0x45cd73e1, "device_add" },
	{ 0xdd560c87, "transport_class_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe7275a55, "attribute_container_find_class_device" },
	{ 0x94bd2068, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd94181ab, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x806f9540, "dev_set_name" },
	{ 0xd0e6564d, "scsi_is_sdev_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6EDEED1D99649BFAD4562FE");
