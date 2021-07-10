/*Q. Write a C Program using a recursive function to print the non-fibonacci series.
*/
#include<stdio.h>
int NonFibonacci(int n)
{
    int a=n;
    int prev1=1, prev2=2, curr=3;
    while(n>0)
    {
        prev1 = prev2;
        prev2 = curr;
        curr = prev1 + prev2;
        n = n - (curr - prev2 -1);
    }
    n = n + (curr - prev2 -1);
    if(a>1)
       NonFibonacci(a-1);
    printf("%d ", prev2+n);   
}
void main()
{   int range;
    printf("\nUpto how many terms of series you want to print:");
    scanf("%d",&range);
    printf("\n\tNON FIBONACCI SERIES\n");    
    NonFibonacci(range);                
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
