// Write the function who set  bit and print the result//

#include <stdio.h>

int setBit(int x, unsigned char position) {

	return  (x|(1 << position));

}

int main()
{

	int x = 0xC0;
	char position = 2;
	printf("0x%X with %u-th bit Set: 0x%X\n", x, position, setBit(x, position));

	getchar;

}