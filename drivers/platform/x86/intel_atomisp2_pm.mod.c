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
	{ 0x20a69ede, "pci_save_state" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0xd68fadcf, "pci_write_config_dword" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x86c7272b, "iosf_mbi_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x96eab78b, "iosf_mbi_modify" },
	{ 0xda0cfe01, "__pm_runtime_suspend" },
	{ 0x6f59aff, "pm_runtime_allow" },
	{ 0x22210651, "pm_runtime_forbid" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000F38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022B8sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2BBFE5082E67F96D2FF91A4");
