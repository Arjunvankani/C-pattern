/*
Enter the number of rows to show the star pattern:  5                                                                                         
    *                                                                                                                                         
   * *                                                                                                                                        
  * * *                                                                                                                                       
 * * * *                                                                                                                                      
* * * * *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter the number of rows to show the star pattern:  ");
    int n, x,  y,  s = 1, k;
    scanf("%d",&n);
        for(x = 1; x <= n; x++)
        {
        //for loop to put space
            for(s = x; s < n; s++)
                printf(" ");
        //for loop for displaying star
            for(y = 1; y <= x; y++)
                printf("* ");
        // ending line after each row
            printf("\n");
        }
    return 0;
}