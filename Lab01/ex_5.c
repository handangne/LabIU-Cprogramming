#include <stdio.h>

int main ()
{
    int i, w, r, x;
    printf ("Initially chickens: ");
    scanf ("%d/n", &i);
    printf ("How many weeks? ");
    scanf ("%d/n", &w);
    printf ("Weekly breeding rate: ");
    scanf ("%d/n", &r);
    x = i + w*r;
    printf ("Number of chicken: %d", x);
    return 0;
}
