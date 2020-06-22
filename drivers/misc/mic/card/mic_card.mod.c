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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x40120314, "single_open" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xda584c89, "single_release" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x21b0d9f9, "platform_device_register_full" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0x823d5edb, "dma_set_coherent_mask" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xd33c5b3, "vop_unregister_device" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5850110, "printk" },
	{ 0xfd5a9f42, "scif_register_device" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7ae5b6d2, "mbus_register_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x681e3cee, "module_put" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcad9e14, "mbus_unregister_device" },
	{ 0x9315f481, "vop_register_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcb10622b, "__dma_request_channel" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0xb44c9324, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x6285a072, "devm_ioremap" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc7a57ce4, "scif_unregister_device" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "vop_bus,scif_bus,mic_bus");


MODULE_INFO(srcversion, "62855ED53C6300C186575B2");
