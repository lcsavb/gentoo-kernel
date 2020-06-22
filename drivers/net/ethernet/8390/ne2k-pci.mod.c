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
	{ 0x1159a640, "param_ops_uint" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0xece85da4, "param_array_ops" },
	{ 0x84774a56, "ei_poll" },
	{ 0xb3843bb2, "ei_get_stats" },
	{ 0x84fbbce0, "ei_tx_timeout" },
	{ 0xb138cd96, "eth_validate_addr" },
	{ 0x591912fa, "eth_mac_addr" },
	{ 0x64508f6d, "ei_set_multicast_list" },
	{ 0xd7933c79, "ei_start_xmit" },
	{ 0x967b5f91, "pci_unregister_driver" },
	{ 0x1ce7c960, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xbffb0118, "ei_open" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x119721ac, "ei_interrupt" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf163231, "netdev_info" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xc756f81d, "__alloc_ei_netdev" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x36ddd7f4, "ei_close" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0x49e01c37, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9820fcb5, "pci_choose_state" },
	{ 0xb3759e66, "pci_disable_device" },
	{ 0x20a69ede, "pci_save_state" },
	{ 0xe46a91b4, "netif_device_detach" },
	{ 0xc6e30bfa, "netif_device_attach" },
	{ 0x80a478a1, "NS8390_init" },
	{ 0xd2dd8c33, "pci_enable_device" },
	{ 0x9333aebe, "pci_restore_state" },
	{ 0x6bf7173b, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "8390");

MODULE_ALIAS("pci:v000010ECd00008029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000940sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00001401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008E2Ed00003000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004A14d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010BDd00000E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00005A5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000012C3d00005598sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008C4Ad00001980sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "47538193D9E3EEAEC274F2A");
