//Verify that the expressiom  getchar() != EOF е 0 или 1.//

#include <stdio.h>


int main(void)
{
	printf("Press a key.\n\n");
	printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
	return 0;
}
