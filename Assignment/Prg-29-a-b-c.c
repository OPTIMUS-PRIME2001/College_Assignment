/*Q. Write a C Program to generate the following patterns
a.    *           b. 1           c. 1 2 3 4 5    d.        1          e. 5 4 3 2 1 2 3 4 5
     * *             1 2            1 2 3 4              2 1 2             4 3 2 1 2 3 4
    * * *            1 2 3          1 2 3              3 2 1 2 3             3 2 1 2 3
   * * * *           1 2 3 4        1 2              4 3 2 1 2 3 4             2 1 2
  * * * * *          1 2 3 4 5      1              5 4 3 2 1 2 3 4 5             1 
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{   int i, j, k, m=1,count=0, count1=0;
    printf("\na.\n");
    for(i=5; i>=1; i--)
    {
      for(j=0; j<=i-1;j++)
      {
          printf(" ");
      }
      for(k=0; k<m; k++)
      {
          printf("* ");
      }
      printf("\n");
      m++;
    }
    printf("\nb.\n  ");
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        { 
            printf("%d ", j);
        }
        printf("\n  ");
    }
    printf("\nc.\n  ");
    for(i=5; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        { 
            printf("%d ", j);
        }
        printf("\n  ");
    }
    printf("\nd.\n  ");
    for (i = 1; i <= 5; ++i)
    {
       for (j = 1; j <= 5 - i; ++j) 
       {
           printf("  ");
           ++count;
       }
       for(k=0; k<(i*2-1); ++k)
       {
           if(count <= 5 - 1) 
           {
              printf("%d ", i - k);
              ++count;
           }
           else
           {
              ++count1;
              printf("%d ", (i - k + 2 * count1));
           }           
       }
      count=count1=k=0;
      printf("\n  ");
    }
    printf("\ne.\n  ");
    for(i=5; i>=1 ; --i)
     {  
        for (j = 1; j <= 5 - i; ++j) 
        {
           printf("  ");
           
        }
        for(j=-i ; j<=i; j++)
        {  if (j==0 || j==1)
           {
                continue; 
            }
            printf("%d ",abs(j));
        }
       printf("\n  ");
     }
}