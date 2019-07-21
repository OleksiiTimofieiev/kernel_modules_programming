#include <linux/module.h>

int	init_module(void)
{
	printk( KERN_INFO "Loading" );
}

void	cleanup_module(void)
{
	printk( KERN_INFO "Unloading");
}

MODULE_LICENSE("GPL");
