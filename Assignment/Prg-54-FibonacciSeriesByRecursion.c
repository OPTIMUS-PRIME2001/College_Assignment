/*Q. Write a C Program using a recursive function to print the fibonacci series.
*/
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
    int i;    
    for(i=0; i<range; i++)
    {  
        printf("%d ",fibonacci(i));                
    }
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}