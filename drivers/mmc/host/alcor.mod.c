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
	{ 0xf689625f, "dma_direct_map_sg" },
	{ 0xb62cbd55, "dma_direct_unmap_sg" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb91dadeb, "alcor_write16" },
	{ 0x17475388, "_dev_warn" },
	{ 0xc2ba46e7, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9931d070, "alcor_write32be" },
	{ 0x84dbf06e, "sg_miter_start" },
	{ 0xda21911c, "alcor_read32be" },
	{ 0x2feaec5c, "alcor_read32" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4b508089, "mmc_free_host" },
	{ 0xa65fa7d, "mmc_remove_host" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x301c4ee3, "mmc_add_host" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe2e6d32b, "devm_request_threaded_irq" },
	{ 0x2d9e9ed, "mmc_alloc_host" },
	{ 0xb9d7d086, "alcor_write32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x817addc9, "alcor_write8" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xf072fe37, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xf565b5ec, "sg_miter_next" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb3f49773, "mmc_request_done" },
	{ 0x96d06635, "alcor_read8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "alcor_pci,mmc_core");

MODULE_ALIAS("platform:alcor_sdmmc");

MODULE_INFO(srcversion, "AD798FA99DFF7C5B21E291C");
