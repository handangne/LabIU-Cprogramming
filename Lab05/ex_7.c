#include<stdio.h>

void largestIncreasing (int[1000], int);
void largestDecreasing (int[1000], int);

int main()
{
    int n;
    printf ("Enter the number of elements in the array: ");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf ("%d", &arr[i]);
    }

    int inc, incm;
    largestIncreasing (arr, n);
    
    printf ("\n");

    int dec, decm;
    largestDecreasing (arr, n);
    
    return 0;
}

void largestIncreasing (int arr[1000], int n)
{
    int i=1, t=1;
    int inc = 1;
    int incm =0;
    arr[n] = arr[n-1] - 1;
    while(i<n)
    {
        while(arr[i] >= arr[i-1])
        {
            i++;
            t++;
        }
        if(t > inc)
        {
            inc=t;
            incm=i-t;
            t=1;
        }
        i++;
    }
    printf ("The largest sorted sub array (increasing): ");
    for(int i=0; i<inc ; i++)
    {
        printf ("%d ", arr[incm+i]);
    }
}

void largestDecreasing (int arr[1000], int n)
{
    int i=1, t=1;
    int dec=1;
    int decm=0;
    arr[n]= arr[n-1] + 1;
    while(i<n)
    {
        while(arr[i]<=arr[i-1])
        {
            i++;
            t++;
        }
        if(t>dec)
        {
            dec=t;
            decm=i-t;
            t=1;
        }
        i++;
    }
    printf ("The largest sorted sub array (decreasing): ");
    for(int i=0; i<dec ;i++)
    {
        printf ("%d ", arr[decm+i]);
    }
}
