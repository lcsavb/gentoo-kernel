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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xa0de0e08, "module_layout" },
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9a1c3c1c, "dma_find_channel" },
	{ 0xfa372803, "dmaengine_unmap_put" },
	{ 0x9e934ff5, "async_tx_submit" },
	{ 0xb2993477, "dmaengine_get_unmap_data" },
	{ 0xaafefee5, "dma_direct_map_page" },
	{ 0x7f6a0153, "async_memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xfea07839, "__async_tx_find_channel" },
	{ 0x4068fe03, "async_xor" },
	{ 0x17fe9d36, "async_tx_quiesce" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe4b051cf, "raid6_datap_recov" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x59a2712d, "raid6_gfinv" },
	{ 0x9d1c9cc7, "async_gen_syndrome" },
	{ 0xd91319d6, "raid6_gfmul" },
	{ 0xcc4ee841, "raid6_gfexi" },
	{ 0x1803a6ed, "raid6_2data_recov" },
	{ 0xad8dd927, "dma_ops" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_memcpy,async_xor,async_pq");


MODULE_INFO(srcversion, "4FF738371EB642F0A7D4AD8");
