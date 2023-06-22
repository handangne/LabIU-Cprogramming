#include <stdio.h>
#include <math.h>

int ex1(int);
float ex2(float);
int ex3(int);
void ex4_inputarray(int[], int);
void ex4_outputarray(int[], int);
void ex5(int[], int);
int ex6(int[], int);
void ex7(int[], int);
void ex8();

int main()
{
    // bai 1
    int n1;
    int result1;
    printf ("Exercise 1\n");
    printf ("enter n: ");
    scanf ("%d", &n1);
    result1 = ex1(n1);
    printf ("The value of this function is: %d", result1);

    // bai 2
    printf ("\n-----------------------------------");
    printf ("\nExercise 2\n");
    printf ("N\t\tPi\n");
    float result2, temp;
    for (float i = 10; i <= 20; i++)
    {
        temp = ex2(i);
        result2 = sqrt(6*temp);
        printf("%.3f\t\t%f\n", i, result2);
    }

    // bai 3
    printf ("\n-----------------------------------");
    printf ("\nExercise 3\n");
    int n3;
    printf ("Enter your input: ");
    scanf ("%d", &n3);
    int check = ex3(n3);
    if (check == n3)
    {
        printf ("%d is perfect number\n", n3);
    }
    else
    {
        printf ("%d is not perfect number\n", n3);
    }
    int temp_num=1000;
    for (int i=1; i <= temp_num; i++)
    {
        check = ex3(i);
        if (check == i)
        {
            printf ("%d is perfect number from 1 to %d\n", i, temp_num);
        }
    }

    //bai 4
    printf ("\n-----------------------------------");
    printf ("\nExercise 4\n");
    int size;
    printf ("Enter the size of the array: ");
    scanf ("%d", &size);
    int arr[size];
    ex4_inputarray(arr, size);
    ex4_outputarray(arr, size);

    //bai 5
    printf ("\n-----------------------------------");
    printf ("\nExercise 5\n");
    printf ("Enter the size of the array: ");
    scanf ("%d", &size);
    ex4_inputarray(arr, size);
    ex4_outputarray(arr, size);
    ex5(arr, size);

    //bai 6
    printf ("\n-----------------------------------");
    printf ("\nExercise 6\n");
    printf ("Enter the size of the array: ");
    scanf ("%d", &size);
    ex4_inputarray(arr, size);
    ex4_outputarray(arr, size);
    int result6 = ex6(arr, size);
    printf("Output: %d\n", result6);

    //bai7
    printf ("\n-----------------------------------");
    printf ("\nExercise 7\n");
    printf ("Enter the size of the array: ");
    scanf ("%d", &size);
    ex4_inputarray(arr, size);
    printf("Result: ");
    ex7(arr, size);
    printf("\n");

    //bai8
    printf ("\n-----------------------------------");
    printf ("\nExercise 8\n");
	int n8;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	ex4_inputarray(arr, size);
	ex8(arr,size);	

    return 0;
}
// a function to calculate 1*2 + 2*3 + 3*4 +...+ n(n+1)= 
int ex1(int n1) 
{
    int a = 0, k=0;
    int i;
    for (i=1; i<=n1; i++)
    {
        k = i*(i+1);
        a += k;
        
    }
    return a;
}

//print out the value of pi 
float ex2(float n2)
{
    if ( n2 > 0 )
    {
        float pow_n2 = pow(n2, 2);
        return (1/pow_n2) + ex2(n2 - 1);
    }
    else 
    {
        return 0;
    }
}

//check whether an input integer number is a perfect number
int ex3(int n3)
{
    int sum = 0;
    for (int i = 1; i <= (n3/2); i++ )
    {
        if ( (n3 % i) == 0 )
        {
            sum += i;
        }
    }
    return sum;
}

//2 functions to input and output an array of n integers
void ex4_inputarray(int arr[], int size)
{
    for ( int i=0; i < size; i++ )
    {
        printf ("Enter the value of index %d of your array: ", i);
        scanf ("%d", &arr[i]);
    }
}
void ex4_outputarray(int arr[], int size)
{
    printf ("Here your array: ");
    for ( int i=0; i < size; i++ )
    {
        printf ("%d ", arr[i]);
    }
}

//find the index of the maximum and minimum elements of a given array of n integers.
void ex5(int arr[], int size)
{
    int min = arr[0], max = arr[0], min_index, max_index;
    for (int i=0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i=0; i < size; i++)
    {
        if (arr[i] == min)
        {
            min_index = i;
            break;
        }
    }
    for (int i=0; i < size; i++)
    {
        if (arr[i] == max)
        {
            max_index = i;
            break;
        }
    }
    printf ("\nindex of min element is %d and index of max is %d", min_index, max_index);
}

int ex6(int arr[], int size) 
{
     int check = 0;
     int i = 0, j = (size - 1);
     while (i <= j) {
          if (arr[i] != arr[j]) {
               check = -1;
               break;
          }
          i++;
          j--;
     }
     if (check == 0) {
          return 1; // Symetric
     } else {
          return 0; // Not symetric
     }
}

void ex7(int arr[], int size)
{
    int j = 0;
     for (int i = 0; i < size; i++) {
          if (arr[i] > 0) {
               if (i != j) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
               }
               j++;
          }
     }

     for (int i = 0; i < size; i++) {
          printf("%d ", arr[i]);
     }
}

void ex8(int arr[],int n) {
{
	int i,j,temp1;
	int a,b,temp2;
	if (n%2!=0) {
		for (i=0; i<=n-1-2; i+=2) {
			for (j=i+2;j<=n-1;j+=2) {
				if (arr[i]>arr[j]) {
					temp1=arr[i];
					arr[i]=arr[j];
					arr[j]=temp1;
				}
			}
		}		
		for (a=1;a<=n-2-2;a+=2) {
			for (b=a+2;b<=n-2;b+=2) {
				if (arr[a]<arr[b]) {
					temp2=arr[a];
					arr[a]=arr[b];
					arr[b]=temp2;
				}
			}
		}
		}
	else if (n%2==0) {
		for (i=0;i<=n-2-2;i+=2) {
			for (j=i+2;j<=n-2;j+=2) {
				if (arr[i]>arr[j]) {
					temp1=arr[i];
					arr[i]=arr[j];
					arr[j]=temp1;
				}
			}
		}
		for (a=1;a<=n-1-2;a+=2) {
			for (b=a+2;b<=n-1;b+=2) {
				if (arr[a]<arr[b]) {
					temp2=arr[a];
					arr[a]=arr[b];
					arr[b]=temp2;
				}
			}
		}
	}
	printf("Reaarange your array:\n");
	for (i=0;i<=n-1;i++)
    {
		printf("%d ", arr[i]);
    }
}
}




