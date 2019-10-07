Name: Yuege Chen, Id: 110142667
Part1:
	I wrote my own shellcode following one of tutorials professor posted. I change the bad characters: i, n, h(69, 6e, 68) to some other characters. Then after I obtained the address of the string, I did some arithmetic operation on those changed characters to get "i", "n", "h" back. And it worked!

Part2: 
	I use gdb break in a program, and use "print system" and "print exit" to find the address of system() and exit().
	Then, I use a helper program loop through libc and memcmp "/bin/sh" to find the address of "/bin/sh".
	Now we have all 3 addresses we need. Our exploit will be in this format: JUNK * 260 + address to system() + address to exit() + address to /bin/bash. And it worked, we got a shell.
