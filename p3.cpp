/*
Enter the number of rows to show number pattern: 5                                                                                            
    1                                                                                                                                         
   123                                                                                                                                        
  12345                                                                                                                                       
 1234567                                                                                                                                      
123456789
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
        for (k = 1; k < (x * 2); k++)
        {
            printf ("%d", k);
        }
      printf ("\n");
    }
    
return 0;
}


