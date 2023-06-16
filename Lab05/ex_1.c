#include <stdio.h>
#include <stdlib.h>

void insertElementsToPointer (int*, int);
void sum(int, int*, int, int[]);

int main()
{
    int length, *p, c, result[2]; //c is the target of pointer

    printf ("Enter the number of values in your array: \n");
    scanf ("%d", &length);

    printf ("Enter your target number: \n");
    scanf ("%d", &c);
    
    //Allocate the memory of the pointer
    p = (int*) malloc(length * sizeof(int));

    // If memory cannot be allocated
    if(p == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }
    insertElementsToPointer (p, length);
    sum(length, p, c, result);

    free(p);
}

void insertElementsToPointer (int*p, int length)
{
    printf ("Enter your elements: \n");
    for (int i=0; i < length; i++)
    {
        scanf ("%d", p+i);
    }
}

void sum(int length, int*p, int c, int result[])
{
    for (int i=0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if ((*(p + i) + *(p + j)) == c)
            {
                result[0] = i;
                result[1] = j;
            }
        }
    }
    printf ("Return ");
    printf ("[%d,", result[0]);
    printf (" %d]", result[1]);

}
