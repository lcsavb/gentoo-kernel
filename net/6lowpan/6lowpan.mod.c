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
	{ 0xcaaa1ee, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x40120314, "single_open" },
	{ 0xda584c89, "single_release" },
	{ 0xd517f601, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8aa20cb5, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xae254cfe, "seq_read" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7e58e881, "__pskb_pull_tail" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x6dd40f18, "simple_attr_release" },
	{ 0xc8ea9852, "skb_pull" },
	{ 0x6a9222b2, "debugfs_attr_read" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x101e3f11, "unregister_netdevice_queue" },
	{ 0xb35401d0, "netdev_warn" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x3fefc4ab, "addrconf_prefix_rcv_add_addr" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0x16fcc917, "addrconf_add_linklocal" },
	{ 0xcf8ac9c7, "__ndisc_fill_addr_option" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x761c01a2, "debugfs_attr_write" },
	{ 0xf51a7aa3, "simple_attr_open" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "7F5306200B51F819B1DC34C");
