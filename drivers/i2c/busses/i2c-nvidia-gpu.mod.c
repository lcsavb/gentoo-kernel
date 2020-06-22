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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x69c31d59, "__pm_runtime_use_autosuspend" },
	{ 0x91b1144d, "pm_runtime_set_autosuspend_delay" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0x47d870d9, "i2c_add_adapter" },
	{ 0xddb04513, "pci_alloc_irq_vectors_affinity" },
	{ 0x93e6f6d7, "pcim_iomap" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xbc629caf, "pcim_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x47444e70, "pci_free_irq_vectors" },
	{ 0xf523adb5, "i2c_del_adapter" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-core");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc0Csc80i*");

MODULE_INFO(srcversion, "B1B480FAA3D3FD0FB31601B");
