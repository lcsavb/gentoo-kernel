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
	{ 0xbaed3847, "__pm_runtime_idle" },
	{ 0x757c0d3a, "sdio_writesb" },
	{ 0xa477cd94, "sdio_enable_func" },
	{ 0xc73d2ff3, "mmc_hw_reset" },
	{ 0x652b4060, "param_ops_bool" },
	{ 0xb6b21267, "__pm_runtime_resume" },
	{ 0x4bc34da2, "sdio_get_host_pm_caps" },
	{ 0xc5850110, "printk" },
	{ 0x2e2bf100, "platform_device_unregister" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x1754d85f, "sdio_readsb" },
	{ 0xf9c42cdc, "sdio_unregister_driver" },
	{ 0x696afc99, "sdio_f0_writeb" },
	{ 0x128d1bbd, "sdio_set_host_pm_flags" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbba1bf59, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xc0270a2c, "sdio_memcpy_toio" },
	{ 0xb32e2de3, "sdio_register_driver" },
	{ 0xb68bc4fd, "sdio_memcpy_fromio" },
	{ 0xbf328a43, "sdio_claim_host" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x19338a90, "sdio_set_block_size" },
	{ 0x16b8692a, "sdio_disable_func" },
	{ 0x96474462, "sdio_release_host" },
};

MODULE_INFO(depends, "mmc_core");

MODULE_ALIAS("sdio:c*v0097d4076*");

MODULE_INFO(srcversion, "67EE4BCE7BAF9BDFA932AD8");
