/*
Enter the number of rows to show number pattern: 5                                                                                              
12345                                                                                                                                           
1234                                                                                                                                            
123                                                                                                                                             
12                                                                                                                                              
1                                                                                                                                               
                                                                                                                                                
1                                                                                                                                               
12                                                                                                                                              
123                                                                                                                                             
1234                                                                                                                                            
12345 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int  n, x, y;
    printf("Enter the number of rows to show number pattern: ");
    scanf("%d",&n);
    for (int x = n; x >= 0; x--)
    {
        for (int y = 1; y <= x; y++)
            printf("%d",y);
            printf("\n");
    }
    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= x; y++)
            printf("%d",y);
            printf("\n");
    }
return 0;
}