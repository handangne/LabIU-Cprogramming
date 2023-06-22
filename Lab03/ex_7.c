#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

int main ()
{
    int date, month, year, x, a, b;
    printf ("Enter date, moth, and year: ");
    scanf ("%d/%d/%d", &date, &month, &year);
    bool A = TRUE;
    if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    A = TRUE;
    else A = FALSE; 
    if (month == 2  && A)//leap year
        {
            x = 29;
            printf ("%d days", x);
        }
    else if (month ==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            x = 31;
            printf ("%d days", x);
        } 
    else if (month ==2)
        {
            x = 28;
            printf ("%d days", x);
        }
    else 
        {
            x = 30;
            printf ("%d days", x);
        }


    if (date == 1)
        {
            if (x == 31 && month != 1 && month != 3) //5781012
            {
                if (month == 8 || month == 9)
                {
                    a = 31;
                }
                else 
                { a =  30; }
            }
            else if (month == 1) { a = 31; month = 13;}
            else if (month == 3)
            {
                if (TRUE) { a = 29; }
                else { a = 28; }
            }
            
            if (x==30) //46911
            {
                a = 31; 
            }
            if (x == 28 || x == 29)
            {
                a = 31;
            }
            b = month -1;
        }
    if (date <= 31 && date >1)
        { a= date -1; b = month;}
    printf ("\nThe previous day is: %d/%d/%d", a, b, year);

    if (date == 28 || date == 29 || date == 30 || date == 31)
        {
        if (date < x) 
            { a = date + 1; month = month + 1;}
        else if (date == x)
        {
            if (x == 31 && month != 12)
            { a = 1; b = month + 1;}
            else if (x == 31 && month == 12)
            { a = 1; b = 1; year = year + 1;}
            else 
            { a = 1; b = month + 1;}
         }
         }
    if (date >=1 && date <28)
        { a = date + 1; b = month;}
    printf ("\nThe next day is: %d/%d/%d", a, b, year);
    return 0;
}
