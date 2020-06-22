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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xf4e1c6b6, "pci_bus_type" },
	{ 0xccfbeafd, "driver_register" },
	{ 0xc5e74216, "release_resource" },
	{ 0x1e1be212, "device_release_driver" },
	{ 0x32d5a1b9, "pci_match_id" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x674fc839, "device_register" },
	{ 0xc5850110, "printk" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x26cf3c40, "device_attach" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x94bd2068, "put_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xd94181ab, "get_device" },
	{ 0xd3b9e080, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x13110126, "request_resource" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "479871E225DED792A877192");
