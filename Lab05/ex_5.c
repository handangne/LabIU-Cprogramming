#include <stdio.h>

void findMinOfEachRow (int[100][100], int[], int, int);
int findMaxOfThoseMin (int[100], int);

int main ()
{
    //Declare variables of rows and collumns
    int m, n;
    printf ("Enter the number of rows (m): ");
    scanf ("%d", &m);
    printf ("Enter the number of columns (n): ");
    scanf ("%d", &n);
    //print array
    int arr[100][100];
    int i, j;
    printf ("Enter your distinguished elements: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &arr[i][j]);
        }
    }
    printf ("Your own array is: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d\t", arr[i][j]);
        }
    printf ("\n");
    }

    int minInRow[100];
    findMinOfEachRow (arr, minInRow , m, n);
    printf ("The list of minimun: ");
    for (i=0; i<m; i++)
    {
        printf ("%d ", minInRow[i]);
    }
    printf ("\n");

    int MaxOfThoseMin = findMaxOfThoseMin (minInRow, m);
    printf("The maximum number from the minimum elements of each row is: %d\n", MaxOfThoseMin);
    
    return 0;
}

void findMinOfEachRow (int arr[100][100], int minInRow[100], int m, int n)
{
    for (int i=0; i < m; i++)
    {
        int min = arr[i][0];
        for (int j=0; j < n; j++)
        {
            if (arr[i][0] > arr [i][j])
            {
                min = arr[i][j];
            }
        }
        minInRow[i]  = min; 
    }
}
int findMaxOfThoseMin (int minInRow[100], int m)
{
    int max = minInRow[0];
    for (int i = 0; i < m; i++)
    {
        if ( minInRow[i] > max )
        {
            max = minInRow[i];
        }
    }
    return max;
}
