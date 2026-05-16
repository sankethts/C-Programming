#include <stdio.h>

int main()
{
	int x = 7, y = 7;

	x = 7 << 32;//C standard says shifting by: >= number of bits, is undefined behavior.
	printf("x is %x\n", x);

	x = y << 32;
	printf("x is %x\n", x);

	return 0;
}
