#include <stdio.h>
#include <stdlib.h>

unsigned int foo (unsigned int n, unsigned int r);
int main()
{
    int n,r;
    printf("%i",foo(513,2));
    return 0;
}

unsigned int foo (unsigned int n, unsigned int r)
{
 if (n > 0)
    return((n % r) + foo(n/r, r));
 else
 return 0;
}
