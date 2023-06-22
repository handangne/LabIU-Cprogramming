#include <stdio.h>

int main ()
{
    float m, x, k, l;
    printf ("Enter your distance in km: ");
    scanf ("%f", &x);
    if (0 < x && x <= 2) { m = 15000; }
    if (0 < x  && x <= 30)
    {
        k = x - 2;
        m = 15000 + (k / 0.25) * 2000;
    }
    if (x > 30)
    {
        l = x - 30;
        k = 30 - 2 ;
        m = 15000 + (k / 0.25) * 2000 + l*5000;
    }
    printf ("The taxi fare is: %g VND", m);
    return 0;
}


