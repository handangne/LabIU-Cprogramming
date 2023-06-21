#include <stdio.h>

int main ()
{
    int x;
    printf ("Number\tSquare\tCube\n");

    for (x=0; x <= 10; x++)
        printf ("%d\t%d\t%d\t\n", x, x*x, x*x*x);
    return 0;
