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
	{ 0xe93e49c3, "devres_free" },
	{ 0x68e0ab7a, "iio_kfifo_allocate" },
	{ 0x255b67cd, "devm_iio_device_match" },
	{ 0x1bd3d8c9, "iio_triggered_buffer_postenable" },
	{ 0xfdf56f26, "__devres_alloc_node" },
	{ 0x1bf4252e, "iio_device_attach_buffer" },
	{ 0x7f3d287e, "devres_release" },
	{ 0x96e4b941, "iio_triggered_buffer_predisable" },
	{ 0x95a61d96, "iio_kfifo_free" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x84fe7b9e, "devres_add" },
	{ 0x5ab09478, "iio_alloc_pollfunc" },
	{ 0x10d3db1e, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "22C108E890DC32A58054AC2");
