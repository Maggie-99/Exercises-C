// Write the function strend(s,t), which returns 1 if the string t occurs
// at the end of the string s, and zero otherwise.


#include <stdio.h>
#include <string.h>
int strend(char* s, char* t)
{
	int slen = strlen(s), tlen = strlen(t);
	if (slen < tlen)
		return 0;
	else
	{
		s = s + slen - tlen;
		return strcmp(s, t) ? 0 : 1;
	}
}
int main()
{
	char s[] = "Hello", t1[] = "llo", t2[] = "World";
	printf("strend(%s, %s) = %d\n", s, t1, strend(s, t1));
	printf("strend(%s, %s) = %d\n", s, t2, strend(s, t2));
	return 0;
}