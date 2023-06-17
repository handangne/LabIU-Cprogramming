#include <stdio.h>
#include <stdlib.h>

void insertElementsToArray1 (int[], int);
void insertElementsToArray2 (int[], int);
void combineArrayAndGiveResult (int[], int[], int, int, int[]);
void medianOfSortedArray(int*, int);

int main ()
{
    int length1, length2, length;
    int arr1[1000], arr2[1000], arr[1000];
    int *p;
    printf ("Enter the number of values of your first array: ");
    scanf ("%d", &length1);
    insertElementsToArray1 (arr1, length1);
    printf ("Enter the number of values of your second array: ");
    scanf ("%d", &length2);
    insertElementsToArray2 (arr2, length2);
    combineArrayAndGiveResult (arr1, arr2, length1, length2, arr);
    return 0;
}

//insert the elements to the arrays
void insertElementsToArray1 (int arr1[], int length1)
{
    printf ("Enter the values of your first array: ");
    for (int i=0; i < length1; i++)
    {
        scanf ("%d", &arr1[i]);
    }
}
void insertElementsToArray2 (int arr2[], int length2)
{
    printf ("Enter the values of your second array: ");
    for (int i=0; i < length2; i++)
    {
        scanf ("%d", &arr2[i]);
    }
}

//combine array
void combineArrayAndGiveResult (int arr1[], int arr2[], int length1, int length2, int arr[1000])
{
    //combine the array to the pointer
    int *p;
    int length = length1 + length2;
    p = (int*)malloc(length*sizeof(int)); // allocate the memory to the pointer
    if(p == NULL) // If memory cannot be allocated
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }

    for (int i = 0; i < length; i++)
    {
        if (i < length1) 
        {
            *(p + i) = arr1[i];
        } 
        else 
        {
            int delta = length2 - length1;
            *(p + i) = arr2[i + delta - length2];
        }
    }

    //sort the array
    for (int i=0; i < length; i++)
    {
        for (int j=i + 1; j < length; j++)
        {
            if (*(p+i) > *(p+j))
            {
                int temp;
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
    printf ("New array: ");
    for (int i=0; i < length; i++)
    {
        printf ("%d, ", *(p + i));
    }
    medianOfSortedArray (p, length);
    
}

//median of the sorted array
//If the number of values is odd, the median is the middle value.
//If the number of values is even, the median is the average of the two middle values.
void medianOfSortedArray (int*p, int length)
{
    float median;
    int position = length/2;
    if (length % 2 != 0)
    {
        median = *(p + position);
        printf ("\nMedian is: %f", median);
    }
    else 
    {
        median = ((*(p + position) + *(p + (position - 1)))/2.0);
        printf ("\nMedian is: %f", median);
    }
    
}
