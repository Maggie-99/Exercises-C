//Write the function who calculates the parity. You must use only & | ~^ >> << != == +-//

# include <stdio.h>
#define bool int


bool  getParity(unsigned int n)
{
    bool parity = 0;
    while (n)
    {
        parity = !parity;
        n = n & (n - 1);
    }
    return parity;
}


int main()
{
    unsigned int n = 12;
    printf("Parity of no %d = %s", n,
        (getParity(n) ? "odd" : "even"));

    return 0;
}