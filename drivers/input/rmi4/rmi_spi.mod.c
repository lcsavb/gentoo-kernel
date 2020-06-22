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
	{ 0xe7d7698, "driver_unregister" },
	{ 0xe817e57e, "__spi_register_driver" },
	{ 0xb2f618a9, "devm_add_action" },
	{ 0x7a327ad4, "rmi_register_transport_device" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcebe7641, "spi_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8799010, "spi_sync" },
	{ 0xb90fcdab, "rmi_dbg" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xa264cf76, "rmi_unregister_transport_device" },
	{ 0x53d4cd37, "rmi_driver_suspend" },
	{ 0x17475388, "_dev_warn" },
	{ 0xac91dc9c, "rmi_driver_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("spi:rmi4_spi");

MODULE_INFO(srcversion, "E3070C099BEFE43BEC25371");
