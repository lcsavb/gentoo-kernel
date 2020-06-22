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
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xd489d51a, "scsi_scan_host" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xa43f28c2, "dma_set_mask" },
	{ 0x4a31a14a, "pci_set_master" },
	{ 0x61ebf7fd, "blk_queue_max_hw_sectors" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x87b8798d, "sg_next" },
	{ 0x75b94a14, "scsi_dma_map" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0xc5850110, "printk" },
	{ 0xedc03953, "iounmap" },
	{ 0xfcd137b8, "scsi_dma_unmap" },
	{ 0x1a281859, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001103d00003220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003510sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003521sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003530sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004210sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004311sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004321sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004322sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003122sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00004522sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003622sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00003690sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "61AA4A76FAA0087CB9D8D00");
