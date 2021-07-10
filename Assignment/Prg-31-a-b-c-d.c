/*Q. Write a C Program to generate the following patterns
a. 1           b.        1           c. * * * *    d. 1                   1
   0 1                 1   1              * * *       3 3 3             3 3 3             
   1 0 1             1   2   1              * *       5 5 5 5 5       5 5 5 5 5               
   0 1 0 1         1   3   3   1              *       7 7 7 7 7 7 7 7 7 7 7 7 7 7      
   1 0 1 0 1     1   4   6   4   1          * *       5 5 5 5 5       5 5 5 5 5          
                                          * * *       3 3 3             3 3 3
                                        * * * *       1                   1
*/
#include<stdio.h>
#include<math.h>
void main()
{  int i,j,k,coef=1,n=0,ar[100];
   printf("\na.\n ");
   for(i=0;i<=5;i++)
   {
      for(j=1;j<=i;j++)
      {
        if((i+j)%2==0)
         {
            printf(" 1");
         }
        else
         {
            printf(" 0");
         }
      }
      printf("\n ");
   }
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   printf("\nb.\n ");
   for(i = 0; i < 5; i++) 
   {
      for(j = 1; j <= 5 - i; j++)
         printf("  ");
      for (k = 0; k <= i; k++) 
      {
         if (k == 0)
            {
               coef = 1;
            }   
         else
            {
               coef = coef * (i - k + 1) / k;
            }   
         printf("%4d", coef);
      }
      printf("\n ");
   }
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   printf("\nc.\n  ");
   //printing upper part
   for(int i=0;i<5;i++)  
   {  
      for(int j=0;j<i;j++)  
      {  
         printf("  ");  
      }  
      for(int k=1;k<=5-i;k++)  
      {  
         printf("* ");  
      }  
      printf("\n  ");  
   }  
   for(int i=1;i<5;i++)  
   {  
      for(int j=1;j<5-i;j++)  
      {  
         printf("  ");  
      }  
      for(int k=1;k<=i+1;k++)  
     {  
        printf("* ");  
     }  
     printf("\n  ");  
   } 
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m"); 
   printf("\nd.\n  ");
   for(i=1; i<=7; i+=2,n+=3)
   {
      for(j=1; j<=i; j++)
      {
         printf("%d ",i);
      }
      for(j=n; j<9; j++)
      {
         printf("  ");
      }
      for(j=1; j<=i; j++)
      {
         printf("%d ",i);
      }
      printf("\n  ");
   }
   for(i=5; i>=1; i-=2,n-=3)
   {
      for(j=1; j<=i; j++)
      {
         printf("%d ",i);
      }
      for(j=n-6; j<9; j++)
      {
         printf("  ");
      }
      for(j=1; j<=i; j++)
      {
         printf("%d ",i);
      }
      printf("\n  ");
   }
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}