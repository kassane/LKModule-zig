#undef __KERNEL__
#define __KERNEL__
 
#undef MODULE
#define MODULE
 
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#include <zigmodule.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Kassane");
MODULE_DESCRIPTION("Zig");

static int __init _init_hellokernel(void) {
    return init_hellokernel();
}
module_init(_init_hellokernel);

static void __exit _exit_hellokernel(void) {
    exit_hellokernel();
}
module_exit(_exit_hellokernel);
