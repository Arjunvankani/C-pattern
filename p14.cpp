/*
Enter the number of rows to show the star pattern:  5                                                                                           
    *                                                                                                                                           
   * *                                                                                                                                          
  *   *                                                                                                                                         
 *     *                                                                                                                                        
*********
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
            //for loop to put space in pyramid
            for (s = x; s < n; s++)
                printf(" ");      //for loop to print star
            for(y = 1; y <= (2 * n - 1); y++)
            {
                if(x == n || y == 1 || y == 2 * x - 1)
                    printf("*");
                else
                    printf(" ");
            }
            //ending line after each row
            printf("\n");
        }
    return 0;
}