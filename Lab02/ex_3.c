#include <stdio.h>

int main ()
{
    int num1, num2, k;
    char t;
    printf ("Enter your input: ");
    scanf ("%d%s%d", &num1, &t, &num2);
    if (t == '+')
    {
        k = num1 + num2;
        printf ("%d %c %d = %d", num1, t, num2, k);
    }
    else if (t == '-')
    {
        k = num1 - num2;
        printf ("%d %c %d = %d", k, num1, t, num2, k);
    }
    else if (t == '*')
    {
        k = num1 * num2;
        printf ("%d %c %d = %d", k, num1, t, num2, k);
    }
    else if (t == '/')
    {
        k = num1 / num2;
        printf ("%d %c %d = %d", k, num1, t, num2, k);
    }
    else {printf ("error"); };
    return 0;

}
