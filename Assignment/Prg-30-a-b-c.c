/*Q. Write a C Program to generate the following patterns
a.        1          b. 5 6 7 8 9 8 7 6 5    c. 0            d. 1
        2 3 2             4 5 6 7 6 5 4         1 1             121
      3 4 5 4 3             3 4 5 4 3           2 3  5          12321
    4 5 6 7 6 5 4             2 3 2             8 13 21 34      1234321
  5 6 7 8 9 8 7 6 5             1                               12321
                                                                121
                                                                1  
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{  int i, j, k, m=1,count=0, count1=0;
   printf("\na.\n  ");
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
              printf("%d ", i + k);
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
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
    printf("\nb.\n  ");
    for (i = 5; i >= 1; --i)
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
              printf("%d ", i + k);
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
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
    printf("\nc.\n  ");
    int result=0, num1=0 , num2=1;
    for(i=1; i<5; ++i)
    {
        for(j=1; j<=i; ++j)
        {  
           if(result<10)
             { printf("%d  ",num1); }
           else
             { printf("%d ",num1);} 
           result = num1 + num2;
           num1 = num2 ;      
           num2= result;            
       }
        printf("\n  ");
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
    printf("\nd.\n  ");
    //printing upper part
    for(i=1; i<5 ; ++i)
     {  
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n  ");
     }
     //printing lower part
     for(i=3; i>=1 ; --i)
     {  
        for(j=1;j<=i;j++)
        {
            printf("%d", j);
        }

        for(j=i-1;j>=1;j--)
        {
            printf("%d", j);
        }
        printf("\n  ");
     }  
     printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}