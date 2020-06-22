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
	{ 0xece85da4, "param_array_ops" },
	{ 0xebd0860e, "xenbus_unregister_driver" },
	{ 0x665f1e3c, "__xenbus_register_frontend" },
	{ 0x85cb2c45, "xen_has_pv_devices" },
	{ 0x54ea6dfe, "xen_start_flags" },
	{ 0x731dba7a, "xen_domain_type" },
	{ 0xe22a31c8, "input_free_device" },
	{ 0xd927b28f, "input_mt_init_slots" },
	{ 0x3bad22f7, "input_set_abs_params" },
	{ 0x6b223b33, "input_set_capability" },
	{ 0x37914025, "xenbus_write" },
	{ 0x55a3de79, "input_register_device" },
	{ 0xf443f897, "input_allocate_device" },
	{ 0xc6572a90, "xenbus_read_unsigned" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb602546d, "xenbus_free_evtchn" },
	{ 0x7f97458, "xenbus_dev_fatal" },
	{ 0xfe727411, "get_phys_to_machine" },
	{ 0x3a7d80f9, "xen_max_p2m_pfn" },
	{ 0x25f02c87, "xen_p2m_addr" },
	{ 0x3362b03c, "xen_p2m_size" },
	{ 0x52431348, "xenbus_transaction_start" },
	{ 0x732852fe, "xenbus_transaction_end" },
	{ 0x6aa2a877, "xenbus_printf" },
	{ 0xe41534ce, "bind_evtchn_to_irqhandler" },
	{ 0xcf5e1536, "xenbus_alloc_evtchn" },
	{ 0x57719632, "gnttab_grant_foreign_access" },
	{ 0x4b931968, "xen_features" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfa0b1c44, "xenbus_switch_state" },
	{ 0xb827674a, "xenbus_frontend_closed" },
	{ 0xc5850110, "printk" },
	{ 0xd9a25476, "input_mt_sync_frame" },
	{ 0xaf8e2bf2, "input_mt_report_slot_state" },
	{ 0x86623fd7, "notify_remote_via_irq" },
	{ 0xad0cba41, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x35b03d6c, "input_unregister_device" },
	{ 0x372cfd6e, "gnttab_end_foreign_access" },
	{ 0x7712771a, "unbind_from_irqhandler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8B255C8DC873DB162BFF26F");
