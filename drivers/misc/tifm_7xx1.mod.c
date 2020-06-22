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
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1a281859, "pv_ops" },
	{ 0xfd94814e, "complete_all" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb4f250b, "tifm_add_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf2bd15, "pci_ioremap_bar" },
	{ 0x4bd50ad3, "tifm_alloc_adapter" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x674fc839, "device_register" },
	{ 0x9989636b, "tifm_alloc_device" },
	{ 0xe5755cce, "tifm_free_device" },
	{ 0x35ec2dbc, "tifm_free_adapter" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x27522eea, "pci_intx" },
	{ 0xedc03953, "iounmap" },
	{ 0x8c8ec028, "tifm_remove_adapter" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x1ea65201, "pci_enable_wake" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb277f, "tifm_queue_work" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tifm_core");

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4C4C8AB9E7B18130DD29FF8");
