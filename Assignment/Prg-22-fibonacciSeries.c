/*Q. Write a C Program to print the fibonacci series without using recursion.
 (using for loop)
 */
#include<stdio.h>
void main()
{   int range;
    printf("\nUpto how many terms of series you want to print:");
    scanf("%d",&range);
    printf("\n\tFIBONACCI SERIES\n");
    int i, result=0, num1=0 , num2=1;    
    printf("%d %d ",num1,num2);
    result = num1 + num2 ;
    for(i=0; i<range; i++)
    {  
        printf("%d ",result); 
        num1 = num2 ;      
        num2= result;
        result = num1 + num2;
    }
}