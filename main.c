#include <stdio.h>

int
main(int argc, char** argv)
{
	char c, *p, buf[256];
	int cnt;

	p = buf;

	printf("Enter your string: ");
	fgets(buf, sizeof(buf), stdin);

	while(c = *p){
		switch(c) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
			case 'a': case 'e': case 'i': case 'o': case 'u':
				cnt++;
		}
		p++;
	}

	printf("Vowels count is %d\n", cnt);

	return 0;
}