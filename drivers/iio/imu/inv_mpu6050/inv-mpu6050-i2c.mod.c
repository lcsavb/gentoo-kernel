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
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0x824dfd1f, "i2c_mux_add_adapter" },
	{ 0x349cba85, "strchr" },
	{ 0x754d539c, "strlen" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x2fd2a8bd, "i2c_mux_del_adapters" },
	{ 0xfc511de3, "inv_mpu_pmops" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe80e0d14, "acpi_match_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x70e9297, "i2c_mux_alloc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x78492045, "i2c_unregister_device" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xe64519b, "inv_mpu6050_set_power_itg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x662a3cab, "__devm_regmap_init_i2c" },
	{ 0x16dbec87, "acpi_dev_get_resources" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x773611f7, "inv_mpu_core_probe" },
	{ 0x37a0cba, "kfree" },
	{ 0x60806523, "i2c_acpi_get_i2c_resource" },
	{ 0x17cc7300, "regmap_write" },
	{ 0xa13d3d7a, "i2c_new_device" },
	{ 0xbead065b, "is_acpi_device_node" },
};

MODULE_INFO(depends, "i2c-mux,i2c-core,inv-mpu6050,regmap-i2c");

MODULE_ALIAS("acpi*:INVN6500:*");
MODULE_ALIAS("i2c:mpu6050");
MODULE_ALIAS("i2c:mpu6500");
MODULE_ALIAS("i2c:mpu6515");
MODULE_ALIAS("i2c:mpu9150");
MODULE_ALIAS("i2c:mpu9250");
MODULE_ALIAS("i2c:mpu9255");
MODULE_ALIAS("i2c:icm20608");
MODULE_ALIAS("i2c:icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6050C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6500C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515");
MODULE_ALIAS("of:N*T*Cinvensense,mpu6515C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9150C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9250C*");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255");
MODULE_ALIAS("of:N*T*Cinvensense,mpu9255C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608");
MODULE_ALIAS("of:N*T*Cinvensense,icm20608C*");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602");
MODULE_ALIAS("of:N*T*Cinvensense,icm20602C*");

MODULE_INFO(srcversion, "51C49B36C71F253C07C67BF");
