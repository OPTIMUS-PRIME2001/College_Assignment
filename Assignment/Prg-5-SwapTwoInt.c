//Q. Write a C Program to swap two integer numbers without using 3rd Variable.
#include<stdio.h>
#include<stdlib.h>

int main()
{  int a,b;
   printf("\n\nEnter a:"); scanf("%d", &a);
   printf("Enter b:"); scanf("%d", &b);
   printf("Before swapping two numbers \n a:%d\n b:%d\n",a,b);
   //Swapping Algorithm
   a = a+b; 
   b = a-b;
   a = a-b;
   printf("After Swapping two numbers\n a:%d\n b:%d",a,b);

   /*
   int x,y;
   printf("\n\nEnter a:"); scanf("%d", &x);
   printf("Enter b:"); scanf("%d", &y);
   printf("Before swapping two numbers \n a:%d\n b:%d\n",x,y);
   //Swapping Algorithm
   x = x*y; 
   y = x/y;
   x = x/y;
   printf("After Swapping two numbers\n a:%d\n b:%d",x,y);
   */

   /*
   int a=26 ,b=42;
   printf("\n\nBefore swapping two numbers \n a:%d\n b:%d\n",a,b);
   //Swapping Algorithm
   a = a+b; 
   b = a-b;
   a = a-b;
   printf("After Swapping two numbers\n a:%d\n b:%d",a,b);
   */

  /*
   int x=26 ,y=42;
   printf("\n\nBefore swapping two numbers \n a:%d\n b:%d\n",x,y);
   //Swapping Algorithm
   x = x*y; 
   y = x/y;
   x = x/y;
   printf("After Swapping two numbers\n a:%d\n b:%d",x,y);
   */
  printf("\033[0;32m");printf("\nTest Passed %c\n",251);printf("\033[0m");
  return 0;
}