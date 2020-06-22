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
	{ 0x3d38ff95, "module_layout" },
	{ 0xc3095f9a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x53b954a2, "up_read" },
	{ 0xa2d04e11, "__put_devmap_managed_page" },
	{ 0xfee09e62, "single_open" },
	{ 0x6ebcf7d0, "proc_create_seq_private" },
	{ 0xb211be12, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x12e285ec, "is_uv_system" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6e749b43, "seq_printf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x44aaf30f, "tsc_khz" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xeb06d5a7, "seq_read" },
	{ 0xaee1f9ea, "__alloc_pages_nodemask" },
	{ 0x386534a3, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xb50e1f27, "__uv_cpu_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3e438274, "misc_register" },
	{ 0xdad13544, "ptrs_per_p4d" },
	{ 0xfb578fc5, "memset" },
	{ 0xfdd81e7e, "proc_mkdir" },
	{ 0x5cd891a7, "current_task" },
	{ 0xa50bcff0, "x86_cpu_to_apicid" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7a667a8, "mmu_notifier_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaad65c7a, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d19f77b, "physical_mask" },
	{ 0xce807a25, "up_write" },
	{ 0xc624e30e, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x6a4f623b, "mmu_notifier_synchronize" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x67dcd76b, "uv_setup_irq" },
	{ 0x42bc8d98, "find_vma" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x618911fc, "numa_node" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x433faba2, "get_user_pages" },
	{ 0x8ad5ceb1, "__uv_hub_info_list" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xf9898015, "kmem_cache_alloc_trace" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1b2b92f1, "remove_proc_subtree" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x100fa18b, "zap_vma_ptes" },
	{ 0x2a7a4cf9, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xdeb4f63e, "remap_pfn_range" },
	{ 0x72d79d83, "pgdir_shift" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5d9317d7, "uv_teardown_irq" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x3d5ff607, "mmu_notifier_get_locked" },
	{ 0xe551aaf2, "dump_page" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x70d9c8, "proc_create" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x45b32950, "param_ops_ulong" },
	{ 0x674a1507, "misc_deregister" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x576da254, "__put_page" },
	{ 0xaa86cfb5, "uv_possible_blades" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCBEBC39CF2D4EC29F8F77B");
