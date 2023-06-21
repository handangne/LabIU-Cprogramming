#include<stdio.h> 
int main()
{ 
    int num; 
    printf ("Enter number: ");
    scanf("%d", &num); 
    while(num)
    { 
        printf("%d ", num%10); 
        num=num/10; 
    } 
    return 0; 
} 
