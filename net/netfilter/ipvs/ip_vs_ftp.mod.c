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
	{ 0x3b052859, "param_ops_ushort" },
	{ 0xece85da4, "param_array_ops" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0xb8d9e315, "ip_vs_conn_in_get" },
	{ 0x84cf80eb, "skb_ensure_writable" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20132f20, "ip_vs_conn_new" },
	{ 0x6092d12e, "ip_vs_nfct_expect_related" },
	{ 0x9ae8acfb, "__nf_nat_mangle_tcp_packet" },
	{ 0xf0f9f965, "ip_vs_conn_put" },
	{ 0xc06e2155, "ip_vs_tcp_conn_listen" },
	{ 0xa916b694, "strnlen" },
	{ 0x4dc3f1c2, "ip_vs_conn_out_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xc5850110, "printk" },
	{ 0x2119e28a, "register_ip_vs_app_inc" },
	{ 0x563c238c, "register_ip_vs_app" },
	{ 0xf9138aff, "unregister_ip_vs_app" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_vs,nf_nat");


MODULE_INFO(srcversion, "4625A1061038DA4191556E9");
