// Write a program that prints its input one word per line.//


#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
    int c;
    int inspace;

    inspace = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (inspace == OUT) {
                inspace = IN;
                putchar('\n');
            }
            
        }
        else {
            inspace = OUT;
            putchar(c);
        }
    }

    return 0;
}
