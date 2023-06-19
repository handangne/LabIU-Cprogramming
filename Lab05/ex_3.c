#include <stdio.h>

void sortColumns (int, int, int[100][100]);
void printTheSortedMaTrix (int , int , int [100][100]);

int main ()
{
    //Declare variables of rows and collumns
    int m, n;
    printf ("Enter the number of rows (m): ");
    scanf ("%d", &m);
    printf ("Enter the number of columns (n): ");
    scanf ("%d", &n);
    int i, j;
    int arr[100][100];
    printf ("Enter your elements of the array: ");
    for (i=0; i < m; i++)
    {
        for (j=0; j < n; j++)
        {
            scanf ("%d", &arr[i][j]);
        }
    }
    printf ("The given matrix is: \n");
    for (i=0; i < m; i++)
    {
        for (j=0; j < n; j++)
        {
            printf ("%d\t", arr[i][j]);
        }
    printf ("\n");
    }

    sortColumns (m, n, arr);
    printTheSortedMaTrix (m, n, arr);

    return 0;
}

void sortColumns (int m, int n, int arr[100][100])
{
    for (int j = 0; j < n; j++)
    {
        if (j % 2 != 0) //odd columns in increasing order
        {
            for (int i = 0; i < m; i++)
            {
                for (int k = i + 1; k < m; k++)
                {
                    if (arr[k][j] < arr[i][j])
                    {
                        int temp = arr[k][j]; 
                        arr[k][j] = arr[i][j];
                        arr[i][j] = temp;
                    }
                }
            }
        }
        else //even columns in decreasing order
        {
            for (int i = 0; i < m; i++)
            {
                for (int k = i + 1; k < m; k++)
                {
                    if (arr[k][j] > arr[i][j] ) 
                    {
                        int temp = arr[k][j]; 
                        arr[k][j] = arr[i][j];
                        arr[i][j] =  temp;
                    }
                }
            }
        }
    }
}

void printTheSortedMaTrix (int m, int n, int arr[100][100])
{
    printf ("The sorted matrix is: \n");
    for (int i=0; i < m; i++)
    {
        for (int j=0; j < n; j++)
        {
            printf ("%d\t", arr[i][j]);
        }
    printf ("\n");
    }
}


