//Write a function reverse(s) that reverses the character string s.
//Use it to write a program that reverses its input a line at a time.

#include <stdio.h>


#define MAXLINE	81	/* maximum length of the string */

void reverse(char s[]);

int main() {

	int c, i;
	char line[MAXLINE];

	i = 0;
	while ((c = getchar()) != EOF) {
		line[i] = c;
		i++;
		if (c == '\n' || i == (MAXLINE - 1)) {
			line[i - 1] = '\0';
			reverse(line);
			i = 0;
		}
	}
}

void reverse(char s[]) {

	int i, n;
	char line[MAXLINE];

	for (i = 0; s[i] != '\0' && i < MAXLINE; ++i)
		;

	n = 0;
	if (i == 0 || s[i] == '\0')
		line[i] = '\0';

	if (i > 0)
		for (--i; i >= 0; --i) {
			line[i] = s[n];
			n++;
		}

	printf("%s\n", line);
}