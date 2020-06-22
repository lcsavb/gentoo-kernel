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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x3d38ff95, "module_layout" },
	{ 0xaad65c7a, "noop_llseek" },
	{ 0x3e438274, "misc_register" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x8b966b63, "sn_rtc_cycles_per_second" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc5850110, "printk" },
	{ 0xdeb4f63e, "remap_pfn_range" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xb50e1f27, "__uv_cpu_info" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "747440731BE8DDAD793062C");
