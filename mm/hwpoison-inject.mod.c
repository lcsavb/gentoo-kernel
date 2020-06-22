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
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0x489c7973, "simple_attr_write" },
	{ 0xf42c6c41, "simple_attr_read" },
	{ 0x438fd3f8, "generic_file_llseek" },
	{ 0x2176e42a, "hwpoison_filter_memcg" },
	{ 0x6ba36c6a, "hwpoison_filter_flags_value" },
	{ 0x61e9f16a, "debugfs_create_u64" },
	{ 0x15ea2648, "hwpoison_filter_flags_mask" },
	{ 0x326cefe5, "hwpoison_filter_dev_minor" },
	{ 0x8d7e3373, "hwpoison_filter_dev_major" },
	{ 0x4240cb3b, "debugfs_create_u32" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0x7918d817, "memory_failure" },
	{ 0xc5850110, "printk" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x66fad4b1, "hwpoison_filter" },
	{ 0xbfdeb8ff, "PageHuge" },
	{ 0xd1ecd7fd, "shake_page" },
	{ 0xcc9268fc, "hwpoison_filter_enable" },
	{ 0x1b905b, "get_hwpoison_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb907513f, "unpoison_memory" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "657CE32873700582557C744");
