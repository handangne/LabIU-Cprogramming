#include <stdio.h>

int main ()
{
    int a,b,c,d;
    for (a=0; a<=30; a++)
    {
        for (b=0; b<=15; b++)
        {
            for (c=0; c<=6; c++)
            {
                for (d=0; d<=3; d++)
                { 
                    if ((a*1 + b*2 + c*5 + d*10) == 30)
                    { printf ("\n %d notes of 1000VND + %d notes of 2000VND + %d notes of 5000VND + %d notes of 10000VND", a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}
