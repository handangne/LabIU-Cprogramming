#include <stdio.h>

int main ()
{
    int x,y,a,b,f;
    printf ("Enter your x: ");
    scanf ("%d", &x);
    printf ("\nEnter your y: ");
    scanf ("%d", &y);
    a = x*x;
    b = y*y;
    f = a*(3*b-7*y+2)-b*(2*x+4)+x*(15*y-3)+10*y+6;
    printf ("\n 3x^2y^2 - 2xy^2 - 7x^2y - 4y^2 + 15xy + 2x^2 - 3x + 10y +6 = %d", f);
    return 0;
}
