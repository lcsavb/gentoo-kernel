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
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5830d6d, "__put_devmap_managed_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x21578dbb, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3cdbf383, "dfl_fpga_dev_feature_uinit" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x132321b4, "dfl_fpga_port_ops_add" },
	{ 0x33795f4c, "__platform_driver_register" },
	{ 0xece784c2, "rb_first" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xbf06aaad, "account_locked_vm" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x712e52f7, "current_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xf56cde89, "devm_kfree" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x4916c499, "dma_direct_unmap_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xbe20bcc2, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0x4af422e2, "__dynamic_dev_dbg" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xf3057836, "dfl_fpga_dev_ops_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x51946c58, "remap_pfn_range" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0xd020eaa8, "dump_page" },
	{ 0x8c804ab8, "platform_driver_unregister" },
	{ 0x7a4727c0, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xad8dd927, "dma_ops" },
	{ 0xe48af658, "__put_page" },
	{ 0xf5661842, "get_user_pages_fast" },
	{ 0x2f10a014, "dfl_fpga_port_ops_del" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "dfl");


MODULE_INFO(srcversion, "024E167EDAE1FE1A4050186");
