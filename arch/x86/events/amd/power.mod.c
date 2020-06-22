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
	{ 0xfce9789e, "events_sysfs_show" },
	{ 0xcaf29285, "perf_pmu_unregister" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc73294cc, "perf_pmu_register" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0xc5850110, "printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xbec30d05, "x86_match_cpu" },
	{ 0x87006ba3, "perf_pmu_migrate_context" },
	{ 0x8df7e8d6, "cpumask_any_but" },
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf474c21c, "bitmap_print_to_pagebuf" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1a281859, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E010ADF7507D1352ABE8CDD");
