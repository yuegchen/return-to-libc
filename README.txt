	use gdb break in a program, and use "print system" and "print exit" to find the address of system() and exit().
	Then, use a helper program loop through libc and memcmp "/bin/sh" to find the address of "/bin/sh".
	Now we have all 3 addresses we need. Our exploit will be in this format: JUNK * 260 + address to system() + address to exit() + address to /bin/bash. And it worked, we got a shell.
