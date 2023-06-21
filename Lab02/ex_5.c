#include <stdio.h>

int main ()
{
    int x, i, k;
    printf ("enter N: ");
    scanf ("%d", &x);
    for (i=1; i<=x; i++)
    {
        for (k=1; k<=i; k++)
        {printf ("%d", i);}
        printf ("\n");
    }
    return 0;
}
