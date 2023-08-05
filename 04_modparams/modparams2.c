/*
 * modparams2 lab exercise
 * (c) Kaiwan NB, kaiwanTECH
 */
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual MIT/GPL");

#if LINUX_VERSION_CODE > KERNEL_VERSION(7, 1, 0)
static u64 gvar64 = 42;
#endif

/*
 * 1. There's a deliberate bug with the '#if LINUX_VERSION_CODE ...' line; fix it
 *    so that the variable gvar64 has the value 42 for all kernel versions > 5.0.0
 *    and the value 21 for all other kernels. Print it's value in the init method
 *    to verify the same.
 * 2. Make the global gvar64 declared above into a module param named 'val1'.
 * 3. Allow it to be passed and set at both 
 *    a) insmod (or modprobe) time
 *    b) at any time by root (tip: use sysfs)
 * 4. 
 *    a) Arrange for the module to be auto-loaded at boot. Verify that it does.
 *    b) Ensure it cannot be removed from memory, even by root.
 */

/* Your code here */

