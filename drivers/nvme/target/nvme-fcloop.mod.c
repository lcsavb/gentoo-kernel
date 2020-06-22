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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x9af5a11d, "nvme_fc_register_localport" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0x51e67f3b, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0xad0413d4, "match_hex" },
	{ 0x3f6a1d3a, "device_destroy" },
	{ 0x44e9a829, "match_token" },
	{ 0x87b8798d, "sg_next" },
	{ 0x85df9b6c, "strsep" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x1d263b8b, "device_create_with_groups" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0x1a281859, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0x4e3567f7, "match_int" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x77fe3313, "nvmet_fc_register_targetport" },
	{ 0x94bd2068, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd94181ab, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x33650c48, "class_destroy" },
	{ 0x3e33ac54, "nvme_fc_rescan_remoteport" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x3e2e6264, "__class_create" },
};

MODULE_INFO(depends, "nvme-fc,nvmet-fc");


MODULE_INFO(srcversion, "FF8934DBB40DBE0019D0B46");
