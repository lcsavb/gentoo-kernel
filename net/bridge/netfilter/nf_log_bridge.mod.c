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
	{ 0xf34dac2b, "nf_log_unregister" },
	{ 0xffe58eca, "unregister_pernet_subsys" },
	{ 0xb35a564d, "nf_log_register" },
	{ 0xf8121fa3, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0x8e200b, "nf_log_set" },
	{ 0x617afa54, "nf_log_unset" },
	{ 0xb6464043, "nf_log_l2packet" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "D84460C958661675F869594");
