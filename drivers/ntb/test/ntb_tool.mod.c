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
	{ 0x6a683da4, "simple_open" },
	{ 0x14e3066b, "ntb_unregister_client" },
	{ 0x1d624694, "__ntb_register_client" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xe3fffae9, "__x86_indirect_thunk_rbp" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8f5854b0, "debugfs_create_dir" },
	{ 0x3a9c99c7, "ntb_default_peer_port_count" },
	{ 0x9b4f6be5, "ntb_set_ctx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x89112ad2, "ntb_clear_ctx" },
	{ 0x18cf931d, "debugfs_remove_recursive" },
	{ 0xedc03953, "iounmap" },
	{ 0x7a5e1ee7, "debugfs_create_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x391b2819, "dma_alloc_attrs" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x41f1d1bb, "dma_free_attrs" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x199482c0, "ntb_default_port_number" },
	{ 0x7d74d522, "kstrtoull_from_user" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x248efd3, "kstrtobool_from_user" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0x3d60fc11, "ntb_default_peer_port_number" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x96848186, "scnprintf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x47cfd825, "kstrtouint_from_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb");


MODULE_INFO(srcversion, "F2F19F5D118A8C46E35DCB8");
