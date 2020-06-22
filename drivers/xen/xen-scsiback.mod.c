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
	{ 0x652b4060, "param_ops_bool" },
	{ 0x946cfd49, "param_ops_int" },
	{ 0x3e2df18c, "target_unregister_template" },
	{ 0xebd0860e, "xenbus_unregister_driver" },
	{ 0xfdcaa66f, "target_register_template" },
	{ 0xc145164f, "__xenbus_register_backend" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf67dd98e, "transport_send_check_condition_and_sense" },
	{ 0x949728c0, "target_submit_cmd_map_sgls" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf753dea4, "target_submit_tmr" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f6d704, "target_put_sess_cmd" },
	{ 0x7270d20d, "xenbus_dev_is_online" },
	{ 0xdf6a3fa7, "device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1def880e, "bind_interdomain_evtchn_to_irq" },
	{ 0xb824c9c3, "xenbus_map_ring_valloc" },
	{ 0x1cb9a1c8, "xenbus_gather" },
	{ 0xce0a4020, "xenbus_directory" },
	{ 0xecd8f23d, "xenbus_read" },
	{ 0x6502d9c2, "xenbus_scanf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x9f984513, "strrchr" },
	{ 0x7f97458, "xenbus_dev_fatal" },
	{ 0x1c634b1a, "xenbus_dev_error" },
	{ 0xfa0b1c44, "xenbus_switch_state" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x52477eff, "core_tpg_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xa8549d0, "gnttab_map_refs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x28ec677c, "gnttab_unmap_refs" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x6a3cd6eb, "gnttab_alloc_pages" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa028e565, "xenbus_unmap_ring_vfree" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe55cfca, "transport_generic_free_cmd" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0xbfa225ea, "target_execute_cmd" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xebef2d24, "gnttab_free_pages" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x29361773, "complete" },
	{ 0xb0955d98, "core_tpg_deregister" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x712e52f7, "current_task" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5fa974c2, "target_setup_session" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x5b840287, "target_remove_session" },
	{ 0xc5850110, "printk" },
	{ 0x754d539c, "strlen" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "67D40C591A3C2E53BD1D8D1");
