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
	{ 0x3120ffbb, "bus_register" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x71df4628, "sysfs_remove_bin_file" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x72d930a8, "pcmcia_put_socket" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa1b52c8d, "pcmcia_socket_class" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9294368c, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbe56392f, "bus_rescan_devices" },
	{ 0x17475388, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x36acc576, "pcmcia_parse_uevents" },
	{ 0x674fc839, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd64e37c3, "class_interface_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc10a5a8d, "class_interface_unregister" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x681e3cee, "module_put" },
	{ 0xeddd33db, "pccard_register_pcmcia" },
	{ 0xa9fc3813, "security_locked_down" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x6866139b, "bus_for_each_dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x19c8fe81, "driver_create_file" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xd94181ab, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0xe021294, "sysfs_create_bin_file" },
	{ 0x579d15e3, "request_firmware" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x82cd0821, "driver_attach" },
	{ 0x519ddc40, "driver_remove_file" },
	{ 0x806f9540, "dev_set_name" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xa4d6f89a, "release_firmware" },
	{ 0x5f32a72b, "pcmcia_get_socket" },
	{ 0x13110126, "request_resource" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "pcmcia_core");


MODULE_INFO(srcversion, "8CCAD36E06962432E12D105");
