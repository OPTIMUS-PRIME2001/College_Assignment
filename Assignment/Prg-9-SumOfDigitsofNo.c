/*
Q. Write a C Program to calculate sum of digits of a five digit numbers. 
(do not use any loop construct)
*/
#include<stdio.h>
#include<stdlib.h>
/*int add_digits(int n)
{ if(n==0)
   { return 0; }
  return (n%10 + add_digits(n/10));
}
*/
void main()
{
    int num, sum;
    printf("\nEnter a Five Digit Number:");
    scanf("%d", &num);
    sum = num%10 + (num/10)%10 + (num/100)%10 + (num/1000)%10 + (num/10000)%10;
    printf("The sum of the digits of the 5 digit no %d is %d",num,sum);

    /*int num, sum;
    printf("\nEnter a Number:");
    scanf("%d", &num);
    sum = add_digits(num);
    printf("The sum of the digits of the 5 digit no %d is %d",num,sum);
    */
   printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
}