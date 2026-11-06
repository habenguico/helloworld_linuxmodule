#include <linux/kernel.h>
#include <linux/module.h>

static int __init module_init(void)
{
    printk(KERN_INFO "Hello world!\n");

    return 0;
}

static void __exit module_cleanup(void)
{
    printk(KERN_INFO "Goodbye World!\n");
}
