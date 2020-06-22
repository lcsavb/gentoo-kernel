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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x66772039, "clk_hw_unregister_fixed_rate" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xc43c5c, "clk_hw_register_fixed_rate" },
	{ 0xa3a7f566, "clkdev_hw_create" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x88a9d99b, "devm_clk_hw_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x272b4e9, "clkdev_drop" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x2e6bac44, "skl_dsp_set_dma_control" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-skl");


MODULE_INFO(srcversion, "581C8D928CDF8AA5DC2858E");
