//Write the function who clear bit and print result.//

#include <stdio.h>

int clearBit(int x, unsigned char position) {

	return  (x &  (~(1 << position)));

}

int main()
{

	int x = 0xC2;
	char position = 1;
	printf("0x%X with %u-th bit Clear: 0x%X\n", x, position, clearBit(x, position));

	getchar;

}