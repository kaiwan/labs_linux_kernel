/* hello, world - kernel module */
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual MIT/GPL");

/* Your code here */

/* 1. First do the simple 'Hello, world' output via the printk().
 *    Also include the 'module author' and 'module description'.
 * 
 * ---Do the ones below only after the instructor has covered these topics---
 *
 * 2. Next, output 'Hello, world pr_info()' output via the pr_info() 
 *
 * 3. Output multiple 'Hello, world pr_*()' output via the pr_*() macros 
 *
 * 4. Change the Makefile symlink to point to the so-called 'better Makefile'
 *    Use it:
 *     - run various targets: help, indent, checkpatch, sa...
 *    Study the output carefully and see if anything requires fixing.
 *
 */

