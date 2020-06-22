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
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x18451539, "pwmchip_remove" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x741a0c0d, "devm_ioremap_resource" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x32adb558, "pwmchip_add" },
	{ 0x7a4727c0, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94B4721248E4168F6A150BD");
