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
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb970751, "stop_machine" },
	{ 0x8292fb68, "pci_read_config_byte" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xee1ab9f8, "pci_dev_put" },
	{ 0xbf24ee64, "pci_get_device" },
	{ 0xdea4660e, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002641sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002640sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002671sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002674sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002676sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002677sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002678sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002679sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000267Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002450sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "862DE32043199028D9F176A");
