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
	{ 0x8597f0bc, "regmap_update_bits_base" },
	{ 0x877fcb2a, "sysfs_create_group" },
	{ 0xdc117a49, "devm_mfd_add_devices" },
	{ 0x19b68e53, "__devm_regmap_init" },
	{ 0x28d47c6f, "platform_get_irq" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xbead065b, "is_acpi_device_node" },
	{ 0x424c497e, "devm_regmap_add_irq_chip" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xcbe12488, "regmap_read" },
	{ 0x659f040f, "intel_pmc_ipc_command" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17cc7300, "regmap_write" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x18119c4a, "sysfs_remove_group" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mfd-core");

MODULE_ALIAS("acpi*:INT34D3:*");

MODULE_INFO(srcversion, "68AF8C86F10957D95390766");
