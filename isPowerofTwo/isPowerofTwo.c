//Write the function who check whether num is power of two. You can only use & | ~^ >> << != == +- //

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int isPowerOfTwo(int x)
{
	return x && (!(x & (x - 1)));
}

int main()
{
	int x;
	printf("Enter a num: ");
	scanf("%d", &x);

	if (isPowerOfTwo(x)) {
		printf("Yes is power of 2\n");
		return 1;
	}
	else
		printf("No, isn't power of 2\n");

	return 0;
}