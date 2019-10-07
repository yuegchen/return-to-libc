#include <string.h>

int main(int argc, char* argv[]){

	char s[] = "/bin/sh";
	char *p = (char *) 0xb7ec2990;

	while (memcmp(++p,s,sizeof s));

	printf("%s\n", p);
	printf("%p\n", p);

	return 0;
}