//Q. Write a C Program to add two numbers.
#include<stdio.h>
#include<stdlib.h>
 int main()
 {
    float a, b, sum;
    a =5; b=7;
    sum = a + b;
    printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,sum);

    /* float a=5, b=7, sum = a+b;
    printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,sum);
    */

   /* float a=5, b=7; 
      float sum = a+b;
    printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,sum);
    */

   /* float a=5, b=7;
      printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,a+b);
    */

   /* float a, b, sum;
      printf("Enter 1st Number:"); scanf("%f", &a);
      printf("Enter 2nd Number:"); scanf("%f", &b);
      sum=a+b;
      printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,sum);
    */
    
    /* float a, b;
      printf("Enter 1st Number:"); scanf("%f", &a);
      printf("Enter 2nd Number:"); scanf("%f", &b);
      float sum=a+b;
      printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,a+b);
    */
    
    /* float a, b, sum;
       sum = (a=5,b=7,a+b);
      printf("\nThe sum of two numbers %.1f and %.1f is : %.1f",a,b,sum);
    */
    printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
    return 0;
 }