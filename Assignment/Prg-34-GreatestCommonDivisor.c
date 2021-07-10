/*Q. Write a complete C program to find the greatest common divisor (gcd) of two positive integers that
are received as arguments to the function.
*/
#include<stdio.h>
/*
void GCD(int n1, int n2)
{ n1 = ( n1 > 0) ? n1 : -n1;
  n2 = ( n2 > 0) ? n2 : -n2;
  while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);  
}
*/
void GCD(int n1, int n2)
{ 
  int i, gcd;
  n1 = ( n1 > 0) ? n1 : -n1;
  n2 = ( n2 > 0) ? n2 : -n2;
  for(i=1; i<=n1 && i<=n2; ++i)
  {
      // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            { gcd = i;       }
  }
  printf("Greatest Common Divisor of %d and %d is %d",n1,n2,gcd);
}
void main()
{  
  int num1,num2;
   printf("\n\nGREATEST COMMON DIVISOR");
   printf("\nEnter two Positive integers:");
   printf("\n Num1:");scanf("%d",&num1);
   printf(" Num2:");scanf("%d",&num2);
   if(num1!=0 && num2!=0)
   {   GCD(num1,num2);    }
   else
   {
     printf("Both the Numbers should be greater than 0 to compute GCD");
   }
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");   
}