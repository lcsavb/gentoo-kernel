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
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0x11b41c30, "pcmcia_register_socket" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6dc06a5c, "pccard_nonstatic_ops" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaa062afd, "pci_request_regions" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0x42a508e0, "_dev_info" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x595aa7ca, "pcmcia_parse_events" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf97f3bd, "dead_socket" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x17475388, "_dev_warn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x3650621c, "pci_release_regions" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x94d8f0dd, "pcmcia_unregister_socket" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia_core,pcmcia_rsrc");

MODULE_ALIAS("pci:v00001013d00001100sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4D2B4A7EC83AF34CD397280");
