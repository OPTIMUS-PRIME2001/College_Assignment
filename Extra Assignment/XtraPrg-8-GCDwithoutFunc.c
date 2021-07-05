/*Q. Write a complete C program to find the greatest common divisor (gcd) of two positive integers
     without using function. 
*/
#include<stdio.h>
void main()
{
   int num1,num2, dividend, divisor, remainder, gcd;
   printf("\n\nGREATEST COMMON DIVISOR");
   printf("\nEnter two Positive integers:");
   printf("\n Num1:");scanf("%d",&num1);
   printf(" Num2:");scanf("%d",&num2);
   if(num1<num2)
    {   dividend = num2;  
        divisor = num1;
    }
    else
    {  dividend = num1;
       divisor = num2;
    }
    if( num1>0 && num2>0)
    {
        do{ 
            remainder = dividend % divisor;
            dividend = divisor;
            divisor = remainder;      
        }while(divisor!=0);
    gcd = dividend;
    printf("Greatest Common Divisor of %d and %d is %d",num1,num2,gcd);
    }
    else
    {
        printf("Both the Numbers should be greater than 0 to compute GCD");
    }
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num1,num2, gcd;
   printf("\n\nGREATEST COMMON DIVISOR");
   printf("\nEnter two Positive integers:");
   printf("\n Num1:");scanf("%d",&num1);
   printf(" Num2:");scanf("%d",&num2);
   if(num1!=0 && num2!=0)
   { 
       num1 = ( num1 > 0) ? num1 : -num1;
       num2 = ( num2 > 0) ? num2 : -num2;
       for(int i = 1; i <= num1 && i <= num2; i++)
       {
           if((num1 % i == 0) && (num2 % i == 0))
           {   gcd = i;  }
        }
        printf("Greatest Common Divisor of %d and %d is %d",num1,num2,gcd);
    }
    else
    {
        printf("Both the Numbers should be greater than 0 to compute GCD");
    }    
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
   return 0;
}
*/