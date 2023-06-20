#include <stdio.h>

int checkPrime (int);
void sort(int[100], int);

int main ()
{
    int n;
    printf ("Enter the number of values in your array: ");
    scanf ("%d", &n);
    int arr[n];
    printf ("Enter the elements of the array: ");
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &arr[i]);
    }

    sort(arr, n);
    printf ("Output: ");
    for (int i=0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    printf ("\n");

    return 0;
}

int checkPrime (int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i=2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void sort(int arr[100], int n) //sort for prime numbers in array
{
    for (int i=0; i < n; i++)
    {
        if ( checkPrime(arr[i]) )
        {
            for (int j=i+1; j < n; j++)
            {
                if (arr[i] > arr[j] && checkPrime(arr[j]) )
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
