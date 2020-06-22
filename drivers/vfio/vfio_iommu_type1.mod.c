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
	{ 0x1159a640, "param_ops_uint" },
	{ 0xc9e93cbf, "vfio_unregister_iommu_driver" },
	{ 0x7913b811, "vfio_register_iommu_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0x19567d06, "vfio_info_cap_shift" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x60a634c4, "vfio_info_cap_add" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4ff1a3ec, "__free_pages" },
	{ 0x35c643ee, "iommu_map" },
	{ 0x1566b3e7, "alloc_pages_current" },
	{ 0xd117cd0d, "iommu_capable" },
	{ 0xcc2dbfd8, "irq_domain_check_msi_remap" },
	{ 0xc672d76a, "iommu_domain_set_attr" },
	{ 0x30c18ecd, "iommu_domain_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf615edc4, "iommu_domain_get_attr" },
	{ 0x7006586e, "iommu_get_group_resv_regions" },
	{ 0x932f8752, "__put_task_struct" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xc4095c8b, "iommu_unmap_fast" },
	{ 0x26e715c4, "iommu_iova_to_phys" },
	{ 0x445ab325, "iommu_unmap" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xf77edaaa, "iommu_attach_group" },
	{ 0xb777b21b, "iommu_domain_free" },
	{ 0xd3c93046, "iommu_detach_group" },
	{ 0x3c2eabeb, "iommu_group_for_each_dev" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xce807a25, "up_write" },
	{ 0xabe5fbed, "__account_locked_vm" },
	{ 0x2c252ed, "mmput" },
	{ 0x677fe9be, "get_task_mm" },
	{ 0x364850b1, "down_write_killable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd020eaa8, "dump_page" },
	{ 0xe48af658, "__put_page" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0xc070bddb, "get_user_pages" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xeca89a3e, "find_vma" },
	{ 0x53b954a2, "up_read" },
	{ 0x714cac80, "get_user_pages_remote" },
	{ 0x712e52f7, "current_task" },
	{ 0x668b19a1, "down_read" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf30c449, "iommu_attach_device" },
	{ 0x20b80cd1, "iommu_aux_attach_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfde47cad, "iommu_detach_device" },
	{ 0xf1c47c26, "iommu_aux_detach_device" },
	{ 0x158f8e45, "iommu_dev_feature_enabled" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vfio");


MODULE_INFO(srcversion, "0B8E8A907254A9D0CDAC7C5");
