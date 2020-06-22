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
	{ 0x3d38ff95, "module_layout" },
	{ 0x9930f8a3, "uv_bios_change_memprotect" },
	{ 0x1e5a5f22, "sn_partition_id" },
	{ 0xde08c325, "gru_read_gpa" },
	{ 0x988a1a00, "sn_region_size" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb50e1f27, "__uv_cpu_info" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9c7283a1, "gru_copy_gpa" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x53569707, "this_cpu_off" },
};

MODULE_INFO(depends, "gru");


MODULE_INFO(srcversion, "76CA34E9C1B49AC893D059B");
