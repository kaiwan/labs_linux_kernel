/*
 * modparams2 lab exercise
 * (c) Kaiwan NB, kaiwanTECH
 */
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual MIT/GPL");

static u64 gvar64 = 42;

/*
 * 1. Make the global gvar declared above into a module param named 'val1'.
 * 2. Allow it to be passed and set at both 
 *    a) insmod (or modprobe) time
 *    b) at any time (tip: use sysfs)
 */

/* Your code here */

