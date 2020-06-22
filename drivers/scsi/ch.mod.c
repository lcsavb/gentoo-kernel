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
	{ 0x946cfd49, "param_ops_int" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x33650c48, "class_destroy" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3ba5bb9c, "scsi_register_driver" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe629aceb, "device_create" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x954f099c, "idr_preload" },
	{ 0x2a421847, "scsi_device_get" },
	{ 0x20978fb9, "idr_find" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x1a281859, "pv_ops" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9166fada, "strncpy" },
	{ 0x26584827, "scsi_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xed6e3872, "scsi_ioctl_block_when_processing_errors" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xb048b19f, "sdev_prefix_printk" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x233e1d07, "scsi_print_sense_hdr" },
	{ 0xd3b3f756, "__scsi_execute" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21B90B80B9FEAF18C21035F");
