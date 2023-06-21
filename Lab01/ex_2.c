#include <stdio.h>
#include <limits.h>
int main() 
{
    int n;
    int min = INT_MAX;
    int max = INT_MIN;
    printf ("Enter number (press 0 to end): ");
    scanf ("%d", &n); 
    if (n==0) 
    {
        printf ("error");
    }
    else
    {
        do
        {
            if (n != 0) 
            {
            if (max < n)
                {
                max = n;
                }
            if (min > n)
                {
                min = n;
                }
            scanf ("%d", &n); 
            }
        }
    while (n != 0);
    
        printf ("The maximum number is: %d\n", max);
        printf ("The minimum number is: %d\n", min);

    }
    return 0;
}
