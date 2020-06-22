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
	{ 0xd5d3b2b3, "fuse_file_poll" },
	{ 0x9625ba10, "noop_llseek" },
	{ 0x867234, "misc_deregister" },
	{ 0x33650c48, "class_destroy" },
	{ 0x2e76b019, "misc_register" },
	{ 0x3e2e6264, "__class_create" },
	{ 0x87b7eb5e, "fuse_dev_operations" },
	{ 0xc5850110, "printk" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x8dd63bfd, "kobject_uevent" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xb4446279, "cdev_add" },
	{ 0x3ac50f37, "cdev_alloc" },
	{ 0x45cd73e1, "device_add" },
	{ 0x94bd2068, "put_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x806f9540, "dev_set_name" },
	{ 0x7ea786f6, "device_initialize" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5ba52e8c, "fuse_dev_free" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0xf01a4b81, "fuse_simple_background" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0x49f24915, "fuse_dev_alloc_install" },
	{ 0xbab17894, "fuse_conn_init" },
	{ 0x48a6c5b, "fuse_dev_fiq_ops" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837bb574, "fuse_direct_io" },
	{ 0xe46bdb71, "fuse_do_ioctl" },
	{ 0x39d15de9, "fuse_do_open" },
	{ 0xcbd58fe9, "fuse_conn_get" },
	{ 0xfcc2372f, "fuse_sync_release" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xe8cb11ad, "fuse_dev_release" },
	{ 0x6ce4ad5c, "fuse_conn_put" },
	{ 0x83c005b8, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb784a33, "fuse_abort_conn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fuse");


MODULE_INFO(srcversion, "7951049D46FEF67FA3A8E4C");
