#include <stdio.h>

int main ()
{
    int n, x, i;
    printf ("Enter your number: ");
    scanf ("%d", &n);
    if (n < 2 )
    {
        printf ("Error");
    }
    for (x = 2; x < n; x++)
    {
        i=2;
        while (x % i != 0) 
        {
            i++;
        }
        if (i == x)
        {
            printf (" %d", x);
        }
    }
    return 0;
}
