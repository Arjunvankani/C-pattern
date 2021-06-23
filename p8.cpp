/*
Enter the number of rows to show number pattern: 5                                                                                            
        1                                                                                                                                     
      2 2 2                                                                                                                                   
    3 3 3 3 3                                                                                                                                 
  4 4 4 4 4 4 4                                                                                                                               
5 5 5 5 5 5 5 5 5 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int x, s, n,  y = 0, cntr = 0, cntr1 = 0;
  printf("Enter the number of rows to show number pattern: ");
  scanf("%d",&n);
        for(x = 1; x <= n; ++x)
        {
            for(s = 1; s <= n-x; ++s)
            {
                printf("  ");
                ++cntr;
            }
            while(y != 2 * x - 1)
            {
                if (cntr <= n - 1)
                {
                    printf("%d ", x );
                    ++cntr;
                }
                else
                {
                    ++cntr1;
                    printf("%d ", (x));
                }
            ++y;
            }
        cntr1 = cntr = y = 0;
        printf("\n");
        }
return 0;
}