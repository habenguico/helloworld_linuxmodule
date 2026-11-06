#include <linux/kernel.h>
#include <linux/module.h>

int module_init(void)
{
    printk(KERN_INFO "Hello world!\n");

    return 0;
}

void module_cleanup(void)
{
    printk(KERN_INFO "Goodbye World!\n");
}
