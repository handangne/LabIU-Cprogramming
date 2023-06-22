#include <stdio.h>
#include <math.h>

int main ()
{
    float a,b,c;
    float x1, x2, delta;
    printf ("Enter a b and c: ");
    scanf ("%f %f %f", &a, &b, &c);
    if (a == 0) { printf ("eror");}
    delta = b*b -4*a*c;
    if (delta > 0)
    {
        delta = sqrt(delta);
        x1 = ((-b + delta)/(2*a));
        x2 = ((-b - delta)/(2*a));
        printf ("roots of quadratic equation are: %f, %f", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b)/(2*a);
        printf ("root of quadratic equation are: %f", x1);
    }
    if (delta < 0)
    {
        printf ("There are no roots");
    }
    return 0;
}
