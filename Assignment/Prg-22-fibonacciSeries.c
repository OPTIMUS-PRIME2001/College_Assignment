/*Q. Write a C Program to print the fibonacci series without using recursion.
 (using for loop)
 Series : 0  1  1  2  3  5  8  13  21  34  55 ......
 */
#include<stdio.h>
void main()
{   int range;
    printf("\nUpto how many terms of series you want to print:");
    scanf("%d",&range);
    printf("\n\tFIBONACCI SERIES\n");
    int i, result=0, num1=0 , num2=1;    
    for(i=0; i<range; i++)
    {  
        printf("%d ",num1); 
        result = num1 + num2;
        num1 = num2 ;      
        num2= result;        
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}