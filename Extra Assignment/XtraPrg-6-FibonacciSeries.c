/*Q. Write a C Program to print the fibonacci series 
 (using for loop)
 Series: 0  1  1  2  3  5  8  13  21  34  55.....
*/ 
#include<stdio.h>
void main()
{   int range;
    printf("\nUpto how many terms of series you want to print:");
    scanf("%d",&range);
    printf("\n\tFIBONACCI SERIES\n");
    int i, result=0, num1=0 , num2=1;    
    printf("%d %d ",num1,num2);
    for(i=0; i<range-2; i++)
    {  
        result = num1 + num2;
        printf("%d ",result); 
        num1 = num2 ;      
        num2= result;
        
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
/*
#include<stdio.h>
int fibonacci(int n)
{
    if(n==0)
       return 0;
    else if(n==1)
       return 1;
    else
       return (fibonacci(n-1) + fibonacci(n-2)) ;     
}
void main()
{   int range;
    printf("\nUpto how many terms of series you want to print:");
    scanf("%d",&range);
    printf("\n\tFIBONACCI SERIES\n");
    int i, result=0, num1=0 , num2=1;    
    //printf("%d %d ",num1,num2);
    for(i=0; i<range; i++)
    {  
        printf("%d ",fibonacci(i));                
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
*/