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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb6eb402a, "iio_channel_release_all" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x10efeded, "iio_buffer_init" },
	{ 0xfdf56f26, "__devres_alloc_node" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x787232c4, "iio_update_buffers" },
	{ 0x7f3d287e, "devres_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84fe7b9e, "devres_add" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xed7b28b7, "iio_channel_get_all" },
	{ 0x37a0cba, "kfree" },
	{ 0x572c43e5, "iio_buffer_put" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "FDADE3D25FB1900198AE832");
