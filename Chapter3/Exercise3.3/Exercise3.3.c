//Write a function expand(s1,s2) that expands shorthand notations like
// a-z in the string s1 into the equivalent complete list abc...xyz in s2.
// Allow for letters of eihter case and digits, and be prepared to handle cases
// like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is 
//taken literally.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



void expand(char s1[], char s2[])
{
	char c;
	int i, j;
	i = j = 0;
	while ((c = s1[i++]) != '\0')
	{
		if (s1[i] == '-' && s1[i + 1] >= c)
		{
			i++;
			while (c < s1[i])
				s2[j++] = c++;
		}
		else
			s2[j++] = c;
		s2[j] = '\0';
	}
}


int main(void)
{
	char *s[] = { "a-z-", "z-a-", "-1-6-", "a-ee-a", "a-R-L", "1-9-1","5-5", NULL };
	char result[100];
	int i = 0;

	while (s[i]) {

		/*  Expand and print the next string in our array s[]  */

		expand(s[i], result);
		printf("Unexpanded: %s\n", s[i]);
		printf("Expanded  : %s\n", result);
		++i;
	}
	return 0;
}