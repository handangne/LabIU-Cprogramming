#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ex1 (int, int*, int, int*);
void ex2 (int, int*, int, int*, int, int*);
void swapValues (int*, int*);
void swapPointers (int**, int**, int**);
void ex3 (int, int*, int, int*, int, int*);
int ex4 (int, int*);
void fillArray (int, int*);
void sortArray (int, int*);
void printfArray (int, int*);

int main ()
{
    int x, y, z;
    int *p, *q, *r;
    printf ("Exercise 1: \n");
    ex1 (x, p, y, q);

    printf ("------------------------------\n");
    printf ("Exercise 2: \n");
    ex2 (x, p, y, q, z, r);

    printf ("------------------------------\n");
    printf ("Exercise 3: \n");
    ex3 (x, p, y, q, z, r);

    printf ("------------------------------\n");
    printf ("Exercise 4: \n");
    int n;
    ex4 (n, p);
    return 0;
}

void ex1 (int x, int*p, int y, int*q)
{
    x = 2;
    y = 8;
    p = &x;
    q = &y;
    printf ("(1)The address of x: %p\n", p);
    printf ("(2)The value of x: %d\n", x);
    printf ("(3)The value of p: %p\n", p); //address of x
    printf ("(4)The value of *p: %d\n", *p); //value of x
    printf ("(5)The address of y: %p\n", q);
    printf ("(6)The value of y: %d\n", y);
    printf ("(7)The value of q: %p\n", q); //address of y
    printf ("(8)The value of *q: %d\n", *q); //value of y
    printf ("(9)The address of p: %p\n", &p);
    printf ("(10)The address of q: %p\n", &q);
}

void ex2 (int x, int*p, int y, int*q, int z, int*r)
{
    x=1, y=2, z=3;
    p=&x, q=&y, r=&z;
    printf ("(1):\n");
    printf ("The values of x, y, z, p, q, r, *p, *q, *r respectively:\n%d, %d, %d, %p, %p, %p, %d, %d, %d.\n", x, y, z, p, q, r, *p, *q, *r);
    swapValues (r, p);
    swapValues (p, q);
    swapValues (q, r);
    printf ("(3):\n");
    printf ("The values of x, y, z, p, q, r, *p, *q, *r respectively:\n%d, %d, %d, %p, %p, %p, %d, %d, %d\n", x, y, z, p, q, r, *p, *q, *r);
}

void swapValues (int*a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ex3 (int x, int*p, int y, int*q, int z, int*r)
{
    x=1, y=2, z=3;
    p=&x, q=&y, r=&z;
    printf ("(1):\n");
    printf ("The values of x, y, z, p, q, r, *p, *q, *r respectively:\n%d, %d, %d, %p, %p, %p, %d, %d, %d.\n", x, y, z, p, q, r, *p, *q, *r);
    swapPointers (&p, &q, &r);
    printf ("(3):\n");
    printf ("The values of x, y, z, p, q, r, *p, *q, *r respectively:\n%d, %d, %d, %p, %p, %p, %d, %d, %d\n", x, y, z, p, q, r, *p, *q, *r);
}

void swapPointers (int**a, int**b, int**c)
{
    int*temp;
    temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int ex4 (int n, int*p)
{
    printf ("The number of values of your array: ");
    scanf ("%d", &n);
    //Allocate the memory of the pointer
    p = (int*)malloc(n*sizeof(int));
    // If memory cannot be allocated
    if(p == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }
    printf ("Random array: ");
    fillArray (n, p);
    printfArray (n, p);
    printf ("\nSorted Array: ");
    sortArray (n, p);
    printfArray (n, p);

    //double the size of array
    //rellocating the memory
    int m = 2*n;
    p = (int*)realloc(p,m*sizeof(int));
    // If memory cannot be allocated
    if(p == NULL)
    {
        printf("Error! memory not allocated.\n");
        exit(0);
    }
    //fill the new elements with random value between 1 and 99
    printf ("\nRandom new array: ");
    fillArray (m, p);
    printfArray (m, p);
    printf ("\nSorted Array: ");
    sortArray (m, p);
    printfArray (m, p);

    free (p);
    return 0;
}

void fillArray (int n, int*p) //with random values
{
    int i;  
      
    /* define the random number generator */  
    srand((int)time (0)); 
    /* generate random number between 0 to 99 */  
    
    for (i = 0; i <n; i++)  
    {  
        //rand() % (max – min + 1) + min to recieve results form min to max
        p[i] = rand() % (99 - 1 + 1) + 1;
    } 
}

void sortArray (int n, int*p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p+i) > *(p+j))
            {
                int temp;
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}

void printfArray (int n, int*p)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", *(p+i));
    }
}
