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
	{ 0xfc2e676c, "b53_serdes_phylink_validate" },
	{ 0x3bf030b, "b53_serdes_link_set" },
	{ 0x16690523, "b53_serdes_an_restart" },
	{ 0x4f33ecb9, "b53_serdes_config" },
	{ 0x314feec1, "b53_serdes_link_state" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0x42a508e0, "_dev_info" },
	{ 0x14a398f6, "b53_serdes_init" },
	{ 0x5ae79d1, "b53_switch_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6fa637d, "platform_get_irq_byname" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe8c85c47, "b53_switch_alloc" },
	{ 0xb825523f, "devm_platform_ioremap_resource" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x570f77f0, "b53_port_event" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x486fd6bb, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "b53_serdes,b53_common,dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm53010-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53010-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53011-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53011-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53012-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53012-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53018-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53018-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53019-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm53019-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5301x-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm5301x-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm11360-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm11360-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58522-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58522-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58525-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58525-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58535-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58535-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58622-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58622-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58623-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58623-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58625-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm58625-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm88312-srab");
MODULE_ALIAS("of:N*T*Cbrcm,bcm88312-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-srab");
MODULE_ALIAS("of:N*T*Cbrcm,cygnus-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,nsp-srab");
MODULE_ALIAS("of:N*T*Cbrcm,nsp-srabC*");
MODULE_ALIAS("of:N*T*Cbrcm,omega-srab");
MODULE_ALIAS("of:N*T*Cbrcm,omega-srabC*");

MODULE_INFO(srcversion, "3B86D2877CBC78125782EA3");
