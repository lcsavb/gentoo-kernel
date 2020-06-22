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
	{ 0xc9a360c0, "net_ns_type_operations" },
	{ 0x14766b4b, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc2557994, "macvlan_link_register" },
	{ 0x3e235bd1, "tap_destroy_cdev" },
	{ 0x1b13d538, "class_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8bf8e99b, "__class_register" },
	{ 0xd514d4d6, "tap_create_cdev" },
	{ 0x1747b616, "macvlan_common_newlink" },
	{ 0xdd4136d0, "netdev_rx_handler_register" },
	{ 0xd3b30aa3, "tap_handle_frame" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c3013af, "sysfs_create_link" },
	{ 0xe629aceb, "device_create" },
	{ 0xe037a066, "tap_free_minor" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x6ca6af05, "sysfs_remove_link" },
	{ 0xab9b2e4b, "tap_queue_resize" },
	{ 0x91081a7e, "tap_get_minor" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x73101c93, "macvlan_common_setup" },
	{ 0xd2ec7116, "netdev_update_features" },
	{ 0xf17df025, "macvlan_dellink" },
	{ 0xf2d6202e, "tap_del_queues" },
	{ 0x18e51b97, "netdev_rx_handler_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "macvlan,tap");


MODULE_INFO(srcversion, "411FE2DCB22C97B0FDAFEB4");
