#include <stdio.h>
#include <math.h>
int main(){
    float p,r,m;
    int n;
    printf("Enter your initial balance, interest rate, the number of years: ");
    scanf("%f,%f,%d",&p,&r,&n);
    m = p * pow((1+r),n);
    printf("%g\n", m);
    return 0;
}
