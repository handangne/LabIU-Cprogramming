#include <stdio.h>

void sortDiagonals (int, int[100][100]);
void printMatrix (int, int[100][100]);


int main ()
{
    int n; //Declare variables
    printf ("Enter n (n is even): ");
    scanf ("%d", &n);
    int arr[100][100];
    printf ("Enter yours values of the array: ");
    //input matrix
    int i, j;
    for (i = 0; i < n; i++ )
    {
        for (j = 0; j < n; j++)
        {
            scanf ("%d", &arr[i][j]);
        }
    }
    printf ("Your matrix: \n");
    for (i = 0; i < n; i++ )
    {
        for (j = 0; j < n; j++)
        {
            printf ("%d\t", arr[i][j]);
        }
        printf ("\n");
    }
    sortDiagonals (n, arr);
    printMatrix (n, arr);
    return 0;
}


void sortDiagonals (int n, int arr[100][100])
{
    //1st diagonal in increasing order
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i][i] > arr[j][j])
            {
                int temp = arr[j][j];
                arr[j][j] = arr[i][i];
                arr[i][i] = temp;
            }
        }
    }
    //2nd diagonal in decreasing order
    for (int i = n - 1, j = 0; i >= 0, j <= n - 1 ; i--, j++)
    {
        for (int a = n - 2, b = 1; a >= 0, b <= n ; a--, b++)
        {
            if (arr[i][j] < arr[a][b]) 
            {
                int temp = arr[i][j];
                arr[i][j] = arr[a][b];
                arr[a][b] = temp;
            }
        }
    }
}

void printMatrix (int n, int arr[100][100])
{
    printf ("Your new matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
