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
	{ 0x6fbc5503, "intel_gvt_unregister_hypervisor" },
	{ 0xc72a9ba, "intel_gvt_register_hypervisor" },
	{ 0x9ce5c7c4, "kvm_slot_page_track_add_page" },
	{ 0xa15d31a2, "gfn_to_memslot" },
	{ 0x2c252ed, "mmput" },
	{ 0x932ef2de, "unuse_mm" },
	{ 0x92f9f92e, "use_mm" },
	{ 0xb853bdcc, "kvm_write_guest" },
	{ 0x98bf36f, "kvm_read_guest" },
	{ 0x1a281859, "pv_ops" },
	{ 0x42e6d901, "kvm_slot_page_track_remove_page" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa921b9d5, "__srcu_read_unlock" },
	{ 0x56a1269a, "kvm_is_visible_gfn" },
	{ 0xfd81c234, "__srcu_read_lock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6c28be5a, "vfio_info_add_capability" },
	{ 0xadc044b7, "vfio_set_irqs_validate_and_prepare" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x95483805, "vfio_pin_pages" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x999e8297, "vfree" },
	{ 0xece784c2, "rb_first" },
	{ 0x7c28f9a9, "kvm_put_kvm" },
	{ 0xa146bbd, "kvm_page_track_unregister_notifier" },
	{ 0x957854d3, "debugfs_remove" },
	{ 0x681e3cee, "module_put" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0xad8dd927, "dma_ops" },
	{ 0x9e9fdd9d, "memunmap" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xae4a7fb0, "mdev_from_dev" },
	{ 0xee189a92, "debugfs_create_ulong" },
	{ 0x771ba276, "kvm_page_track_register_notifier" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1357c781, "kvm_get_kvm" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x712e52f7, "current_task" },
	{ 0x1e65fecc, "vfio_unregister_notifier" },
	{ 0xa9e6af54, "try_module_get" },
	{ 0x72a5957d, "vfio_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x42357669, "gfn_to_pfn" },
	{ 0xacea4bdd, "vfio_unpin_pages" },
	{ 0x849e4bb2, "vfio_device_get_from_dev" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd9fca0ea, "mdev_dev" },
	{ 0xd8e2d85e, "mdev_set_drvdata" },
	{ 0xb863d527, "mdev_parent_dev" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0x315803cb, "mdev_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd5c0f588, "mdev_register_device" },
	{ 0x68d84f13, "mdev_unregister_device" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xc5850110, "printk" },
	{ 0xd13f9985, "drm_edid_block_valid" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x56470118, "__warn_printk" },
	{ 0x969c73d9, "vfio_device_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i915,kvm,vfio,mdev,drm");


MODULE_INFO(srcversion, "7FA62594EDA852B0E1BEEC8");
