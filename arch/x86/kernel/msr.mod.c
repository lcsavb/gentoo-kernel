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
	{ 0x8c2886e, "no_seek_end_llseek" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x33650c48, "class_destroy" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x3e2e6264, "__class_create" },
	{ 0xc5850110, "printk" },
	{ 0x32e0924e, "__register_chrdev" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x804af87c, "wrmsr_safe_on_cpu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a2d1dfa, "rdmsr_safe_regs_on_cpu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb9e276cf, "wrmsr_safe_regs_on_cpu" },
	{ 0xa9fc3813, "security_locked_down" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe629aceb, "device_create" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc6cbbc89, "capable" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "96C74559251C0B39AFA7B12");
