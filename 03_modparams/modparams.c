/*
 * modparams lab exercise
 * (c) Kaiwan NB, kaiwanTECH
 *

1. Write a kernel module that emits three printk’s at KERN_INFO (using the appropriate
pr_<foo> style macro), as follows, in the init method. You are required to prefix
every printk with the module’s name and function name (tip: use the pr_fmt() macro
to do so):
“Hello, %s here\n” (replace the %s with the module’s name) // regular message
“debug message 1 at low verbosity level\n”            // the 3 debug messages
“debug message 2 at medium verbosity level\n”
“debug message 3 at high verbosity level\n”

And in the cleanup method emit: “Goodbye, from %s\n”

Now, passing a (unsigned integer) module parameter named debug_level to the
kernel module should have the following effect:
 If debug_level is set to ‘n’ (valid n is 0,1,2,3) show:
   0 : only regular messages, no debug messages  [default]
   1 : above + low debug verbosity messages
   2 : above + medium debug verbosity messages
   3 : above + high debug verbosity messages

Also ensure you:
Validate, within the code, the debug level passed; if it isn’t in valid range,
display a warning-level message ensure that the user can even run-time modify
this debug_level (tip: it should be editable by root under /sys/module/…)
check the parameter description shows up by running modinfo on your module

2. After the above works, tweak it to make the parameter mandatory.

 */
#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual MIT/GPL");

/* Your code here */

