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
	{ 0xae254cfe, "seq_read" },
	{ 0xc4034d16, "seq_lseek" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xc5850110, "printk" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0xefbd2a4c, "l2tp_session_free" },
	{ 0x53cd2a94, "l2tp_session_get_nth" },
	{ 0x7f28e621, "l2tp_tunnel_free" },
	{ 0xc65b3dce, "l2tp_tunnel_get_nth" },
	{ 0x30ad1974, "seq_release" },
	{ 0xd517f601, "seq_puts" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x906f8c9f, "seq_printf" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb785b84, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbfd67a51, "seq_open" },
	{ 0x84a629fe, "get_net_ns_by_pid" },
	{ 0x712e52f7, "current_task" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "0D249994897D4CD1857E1B3");
