#include <stdio.h>
int main()
{
    int rows, k = 1, space, i, j, n;
    printf("\n Enter your input: ");
    scanf ("%d",&n);
    rows = n + 1;
    for(i=0; i<rows; i++)
    {
        for(space=0; space <= rows-i; space++)
        {printf("  ");}

        for(j=0; j <= i; j++)
        {
            if (j==0 || i==0)
            k = 1;
            else
            k = k*(i-j+1)/j;

            printf("%4d", k );
        }
    printf("\n\n");
    }

    return 0;
}
