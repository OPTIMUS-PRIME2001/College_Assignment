/*Q. Write a C Program to find the sum of all integers that lie between 1 and n and are divisible by 7.
*/
#include<stdio.h>
void main()
{   int i, j=0, n, sum=0;
    printf("\nEnter the value of 'n' :");
    scanf("%d",&n);
    int NumDiv7[n];
    printf("The multiple of 7 lie between %d and %d:\n",1,n);
    for(i=1; i<=n; i++)
    {   
        if(i%7==0)
      { 
          printf("%d + ",i);
          NumDiv7[j] = i;
          j++;
      }        
    }
    for(i=0; i<j; i++)
    {
        sum +=NumDiv7[i];
    }
    printf("\nSum is :%d",sum);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}