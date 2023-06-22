#include <stdio.h>

int main ()
{
    int x, k, s=0;
    printf ("Enter your input: ");
    scanf ("%d", &x);
    for (k=1; k<x; k=k+2)
    s = s + k*k;
    printf ("The sum of squared odd number is: %d", s);
    return 0;
}
