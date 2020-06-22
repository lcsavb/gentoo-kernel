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
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x58fe7b1d, "rapl_add_platform_domain" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x2ecfcfbc, "powercap_register_control_type" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa5e55057, "rdmsrl_safe_on_cpu" },
	{ 0x6228c21f, "smp_call_function_single" },
	{ 0x73f3d935, "rapl_add_package" },
	{ 0xfdf4ba51, "rapl_remove_package" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x93e20211, "rapl_find_package_domain" },
	{ 0x826840c6, "powercap_unregister_control_type" },
	{ 0x3889c0a2, "rapl_remove_platform_domain" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel_rapl_common");

MODULE_ALIAS("platform:intel_rapl_msr");

MODULE_INFO(srcversion, "75FFFACF193F954C22B0621");
