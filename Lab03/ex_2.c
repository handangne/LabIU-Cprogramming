#include <stdio.h>

int main ()
{
    int a, b=1, x;
    printf ("Enter your input: ");
    scanf ("%d", &x);
    if (x % 2 == 0)
    {
        for (a=2; a <= x; a=a+2)
        b *= a;
    }
    else if (x % 2 ==1)
    {
        for (a=1; a <= x; a=a+2)
        b *= a;
    }
    printf ("The factorial is: %d", b);
    return 0;
}
