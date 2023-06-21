#include <stdio.h>

int main ()
{
	int x, i, sum = 0;
	printf ("Enter a positive number: ");
	scanf ("%d", &x);
  if (x <= 0)
    { printf ("Error"); }
  else 
  {
	  for (i = 1; i < x; i++)
    {
		  if (x % i == 0)
			  {
				  sum = sum + i;
			  }
    }
	  if (sum == x)
    {
		  printf ("%d is a perfect number. ", x);
	  }
	  else
    {
		  printf ("%d is not a perfect number. ", x);	
	  } 
  }
	return 0;	
}
