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
	{ 0x204f2aa8, "scsi_change_queue_depth" },
	{ 0x3e2df18c, "target_unregister_template" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x579994f8, "kmem_cache_destroy" },
	{ 0xfdcaa66f, "target_register_template" },
	{ 0xccfbeafd, "driver_register" },
	{ 0x3120ffbb, "bus_register" },
	{ 0x1d1cf8ba, "__root_device_register" },
	{ 0x6e57ea04, "kmem_cache_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x674fc839, "device_register" },
	{ 0x806f9540, "dev_set_name" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc23e8daf, "root_device_unregister" },
	{ 0x6a44be8, "bus_unregister" },
	{ 0xe7d7698, "driver_unregister" },
	{ 0x20f6d704, "target_put_sess_cmd" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf753dea4, "target_submit_tmr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeb552a8c, "scsi_add_device" },
	{ 0xb0955d98, "core_tpg_deregister" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5fa974c2, "target_setup_session" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x754d539c, "strlen" },
	{ 0x5b840287, "target_remove_session" },
	{ 0xe55cfca, "transport_generic_free_cmd" },
	{ 0xbfa225ea, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0xd1af3708, "scsi_add_host_with_dma" },
	{ 0xd937a57f, "scsi_host_alloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15fa44db, "kmem_cache_alloc" },
	{ 0x1c04d1e1, "scmd_printk" },
	{ 0x949728c0, "target_submit_cmd_map_sgls" },
	{ 0x36598bd2, "kmem_cache_free" },
	{ 0xd517f601, "seq_puts" },
	{ 0x2c8d1b67, "scsi_host_put" },
	{ 0xdaaca031, "scsi_remove_host" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x52477eff, "core_tpg_register" },
	{ 0x957a1a8c, "scsi_device_put" },
	{ 0x80bbc9c3, "scsi_remove_device" },
	{ 0x1c406b28, "scsi_device_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x8b8e48d6, "core_allocate_nexus_loss_ua" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "A81F2DE286C09802436D9CA");
