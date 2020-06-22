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
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0x8d86b714, "cb710_sg_dwiter_read_next_block" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0x17475388, "_dev_warn" },
	{ 0xba28870a, "cb710_pci_update_config_reg" },
	{ 0x7d053fcd, "cb710_sg_dwiter_write_next_block" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf10de535, "ioread8" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0x848d372e, "iowrite8" },
	{ 0x1a281859, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x4bf1d746, "pci_read_config_dword" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb7f7d14d, "cb710_set_irq_handler" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cb710,mmc_core");


MODULE_INFO(srcversion, "B46F3E51AE3C0238F815E64");
