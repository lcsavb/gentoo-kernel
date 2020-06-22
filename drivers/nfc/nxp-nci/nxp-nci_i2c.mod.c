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
	{ 0xf9a482f9, "msleep" },
	{ 0x40f2448a, "i2c_del_driver" },
	{ 0x658d6b7a, "nci_recv_frame" },
	{ 0x78d77348, "devm_gpiod_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xcba20cae, "nxp_nci_probe" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xd7cdab38, "devm_acpi_dev_add_driver_gpios" },
	{ 0xd42524ff, "i2c_register_driver" },
	{ 0xb70571a3, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x421d7efa, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x8bb5e84c, "i2c_transfer_buffer_flags" },
	{ 0x5bb09ee8, "nxp_nci_remove" },
	{ 0xa8db015d, "nxp_nci_fw_recv_frame" },
	{ 0x1145801c, "gpiod_set_value" },
	{ 0xffea6bc9, "skb_put" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "i2c-core,nci,nxp-nci");

MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2c");
MODULE_ALIAS("of:N*T*Cnxp,nxp-nci-i2cC*");
MODULE_ALIAS("acpi*:NXP1001:*");
MODULE_ALIAS("acpi*:NXP7471:*");
MODULE_ALIAS("i2c:nxp-nci_i2c");

MODULE_INFO(srcversion, "90742457C9694F4C719C283");
