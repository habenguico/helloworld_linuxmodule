#include "hello_world_mod.h"

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

int hello_world(void)
{
    printk(KERN_INFO "Hello world!\n");

    return 0;
}

void goodbye_world(void)
{
    printk(KERN_INFO "Goodbye World!\n");
}

module_init(hello_world);
module_exit(goodbye_world);
