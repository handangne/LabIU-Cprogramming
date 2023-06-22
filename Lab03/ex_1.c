#include <stdio.h>

int main ()
{
    int a=0, b=0, c=0;
    for (a=0; a<=100; a++)
    {
        if (a % 2 == 0)
        b=b+a;
        else if (a % 2 == 1)
        c=c+a;
    }
    printf ("The sum of even numbers is: %d", b);
    printf ("\nThe sum of odd numbers is: %d", c);
    return 0;

}
