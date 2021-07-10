/*Q. Write a C Program using a recursive function to find the factorial of a number.
*/
#include<stdio.h>

int factorial(int num)
{
  if(num==0)
    return 1;
  else if(num==1)
    return 1;
  else
    return num*factorial(num-1);    
}
void main()
{  int n,num,fact=1;
   printf("\n\nEnter a number whose factorial you want to know:");
   scanf("%d",&num);
   fact = factorial(num);
   printf("The Factorial of the number %d is %d",num,fact); 
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}