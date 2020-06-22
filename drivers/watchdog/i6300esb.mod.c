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
	{ 0x946cfd49, "param_ops_int" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x17475388, "_dev_warn" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xb13deae8, "watchdog_register_device" },
	{ 0xda36135, "pci_write_config_word" },
	{ 0x5776d7f4, "watchdog_init_timeout" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x89121d5c, "pci_request_region" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0xef180f0a, "pci_release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x163fd2fa, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d000025ABsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "42B508F6C3CDC009B94EEF6");
