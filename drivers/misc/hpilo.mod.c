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
	{ 0x9625ba10, "noop_llseek" },
	{ 0x1159a640, "param_ops_uint" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33650c48, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xe629aceb, "device_create" },
	{ 0xb4446279, "cdev_add" },
	{ 0xc81cd1be, "cdev_init" },
	{ 0xf10de535, "ioread8" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbcbc5a17, "pci_iomap_range" },
	{ 0xabe8f244, "pci_iomap" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x32d5a1b9, "pci_match_id" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xe1187d43, "pci_iounmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000B204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003307sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "22E5DD568C0F3A3D31DB675");
