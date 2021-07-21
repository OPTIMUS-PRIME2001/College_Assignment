/*Q. Write a C Program to find the sum of all integers that lie between 1 and n and are divisible by 7.
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{   int i, n, size, sum=0;
    printf("\nEnter the value of 'n' :");
    scanf("%d",&n);
    size = n/7;
    int *NumDiv7 = (int*)malloc(size * sizeof(int));
    printf("The multiple of 7 lie between %d and %d:\n",1,n);
    for(i=0; i<=size; i++)
    {   
        printf("%d ",i*7);
        if(i!=size)
            printf(" + ");
          NumDiv7[i] = i*7; 
    }
    for(i=0; i<=size; i++)
    {
        sum +=NumDiv7[i];
    }
    printf("\nSum is :%d",sum);
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}