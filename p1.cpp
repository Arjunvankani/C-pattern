/*Enter the number of rows to show number pattern: 10                                                                                             
1                   1                                                                                                                           
12                 21                                                                                                                           
123               321                                                                                                                           
1234             4321                                                                                                                           
12345           54321                                                                                                                           
123456         654321                                                                                                                           
1234567       7654321                                                                                                                           
12345678     87654321                                                                                                                           
123456789   987654321                                                                                                                           
12345678910 10987654321
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
            for (y = 1; y <= n; y++)            	
            {            	  
                if (y <= x)                	    
                    printf ("%d", y);                	  
                else                	    
                    printf (" ");               	
            }             
            printf(" ");
            for (y = n; y >= 1; y--)            	
            {            	  
                if (y <= x)                	    
                    printf ("%d", y);                	  
                else                	    
                    printf (" ");            	
            }          
    printf ("\n");        
    }
return 0;
getch();
}
