#include <stdio.h>

int main ()
{
    int x, i, k, j;
    printf ("enter your N: ");
    scanf ("%d", &x);
    for (i=1; i<=x; i++)
    {
        for (k=x-i; k>0; k--)
        {
          printf (" ");
        }
        for (j=1; j<=i; j++)
        {
          printf ("%d", i);
        }
        printf ("\n");
    }
    return 0;
}
