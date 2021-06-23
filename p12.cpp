/*
Enter number of rows to show star pattern: 5                                                                                                    
*                                                                                                                                               
**                                                                                                                                              
***                                                                                                                                             
****                                                                                                                                            
*****                                                                                                                                           
*****                                                                                                                                           
****                                                                                                                                            
***                                                                                                                                             
**                                                                                                                                              
*
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n, s, x, y;
    printf("Enter number of rows to show star pattern: ");
    scanf("%d",&n);
    for(x = 1; x <= n; x++)
    {
        for(y = 1; y <= x;  y++)
        {
            printf("*");
        }
      printf("\n");
    }
    for(x = n; x >= 1; x--)
    {
        for(y = 1; y <= x; y++)
        {
           printf( "*");
        }
        // ending line after each row
      printf("\n");
    }
return 0;
}