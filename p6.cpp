/*
Enter the number of rows to show number pattern: 5                                                                                            
                                                                                                                                              
   1                                                                                                                                          
  12                                                                                                                                          
 123                                                                                                                                          
1234                                                                                                                                          
 123                                                                                                                                          
  12                                                                                                                                          
   1
*/

#include<stdio.h>
#include<conio.h>
int main () 
{
  
int n, x, y, k;
 
printf ("Enter the number of rows to show number pattern: ");
scanf ("%d", &n);
  
    for (x = 1; x <= n; x++)
    {
        for (y = x; y < n; y++)
        {
            printf (" ");
        }
        for (k = 1; k < (x); k++)
        {
            printf ("%d", k);
        }
      printf ("\n");
    }
    for (x = n-1; x >= 1; x--)
    {
        for (y = n; y > x; y--)
        {
            printf (" ");
        }
        for (k = 1; k < (x); k++)
        {
            printf ("%d", k);
        }
       printf ("\n");
    }
return 0;
}


