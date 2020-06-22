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
	{ 0xb7287a3d, "dev_queue_xmit" },
	{ 0x24508f62, "ovs_netdev_tunnel_destroy" },
	{ 0x5e3c14fd, "ovs_vport_ops_unregister" },
	{ 0x7d36e9ef, "__ovs_vport_ops_register" },
	{ 0xe7b9f978, "ovs_vport_free" },
	{ 0x1557a3cb, "rtnl_delete_link" },
	{ 0x6805a44c, "ovs_netdev_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xb3e0a582, "dev_change_flags" },
	{ 0x91276f12, "gretap_fb_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x4aaa7989, "ovs_vport_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "openvswitch,ip_gre");


MODULE_INFO(srcversion, "E4993433CA06AEC7D1D8B87");
