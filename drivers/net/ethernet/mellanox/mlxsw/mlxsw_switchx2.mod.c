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
	{ 0xf163231, "netdev_info" },
	{ 0x7aea09cb, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71e1d813, "mlxsw_core_port_clear" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xf989a9e1, "netif_carrier_on" },
	{ 0x29561594, "netif_carrier_off" },
	{ 0xbfb7df3c, "mlxsw_core_driver_priv" },
	{ 0x5c4b6f47, "__dev_kfree_skb_any" },
	{ 0xd8cbaf1a, "mlxsw_core_trap_register" },
	{ 0x6a523a90, "mlxsw_core_driver_unregister" },
	{ 0x76a65e3b, "mlxsw_core_port_init" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x89d2e641, "mlxsw_pci_driver_register" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x46c73246, "mlxsw_pci_driver_unregister" },
	{ 0x17475388, "_dev_warn" },
	{ 0xca34ccf, "mlxsw_core_max_ports" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc5850110, "printk" },
	{ 0x55e44329, "ethtool_op_get_link" },
	{ 0x2188ee41, "free_netdev" },
	{ 0x6d495207, "register_netdev" },
	{ 0xb5a118bd, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcf6a8c, "skb_push" },
	{ 0x8b3ebdc8, "mlxsw_core_port_eth_set" },
	{ 0xab06bf8b, "_dev_err" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xd252e62d, "mlxsw_core_skb_transmit_busy" },
	{ 0x11be983d, "mlxsw_core_driver_register" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x7495d9e5, "mlxsw_core_port_devlink_port_get" },
	{ 0x4a6ed376, "mlxsw_core_port_fini" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x271ec786, "eth_type_trans" },
	{ 0x44f77de6, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5a2b466e, "netdev_err" },
	{ 0xa0012449, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xadb71b0d, "mlxsw_core_trap_unregister" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe35f4972, "unregister_netdev" },
	{ 0xa7765e88, "mlxsw_reg_query" },
	{ 0xbfd01f33, "mlxsw_core_port_ib_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x925e4ad0, "mlxsw_core_skb_transmit" },
	{ 0x8854d198, "mlxsw_reg_write" },
	{ 0x272adf6c, "alloc_etherdev_mqs" },
	{ 0xf4909bea, "mlxsw_core_port_type_get" },
};

MODULE_INFO(depends, "mlxsw_core,mlxsw_pci");

MODULE_ALIAS("pci:v000015B3d0000C738sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8F16CCB3D4A124052160EE1");
